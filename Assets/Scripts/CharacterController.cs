using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

public class CharacterController : MonoBehaviour {
	[System.Serializable] // make the setting is visualizable in Inspector
	public class MoveSettings {
		public float forwardVel = 120;
//		public float rotateVel = 100;
		public float turnVel = 120;
		public float jumpVel = 25;
		public float distToGround = 27f;
		public LayerMask ground;
	}

	[System.Serializable]
	public class PhysSettings {
		public float downAccel = 0.75f;
	}

	[System.Serializable]
	public class InputSettings {
		public float inputDelay = 0.1f;
		public string FORWARD_AXIS = "Vertical";
		public string TURN_AXIS = "Horizontal";
		public string JUMP_AXIS = "Jump";
	}

	public MoveSettings moveSetting = new MoveSettings ();
	public PhysSettings physSetting = new PhysSettings ();
	public InputSettings inputSetting = new InputSettings ();

	Vector3 velocity = Vector3.zero;
	Quaternion targetRotation;
	Rigidbody rBody;
	float forwardInput, turnInput;
	bool jumpInput;

	public Quaternion TargetRotation {
		get { return targetRotation;}
	}

	bool Grounded() {
		return Physics.Raycast (transform.position, Vector3.down, moveSetting.distToGround, moveSetting.ground);
	}

	void Start () {
		targetRotation = transform.rotation;
		if (GetComponent<Rigidbody> ()) {
			rBody = GetComponent<Rigidbody> ();
		} else {
			Debug.LogError ("The character needs a rigit body");
		}
		forwardInput = turnInput = 0;
		jumpInput = false;
	}

	void GetInput() {
//		forwardInput = Input.GetAxis (inputSetting.FORWARD_AXIS);// from -1 to 1, interpolated
//		turnInput = Input.GetAxis (inputSetting.TURN_AXIS);// interpolated
//		jumpInput = Input.GetButton(inputSetting.JUMP_AXIS);// non-interpolated, 0, -1, 1
		forwardInput = CrossPlatformInputManager.GetAxis (inputSetting.FORWARD_AXIS);
		turnInput = CrossPlatformInputManager.GetAxis (inputSetting.TURN_AXIS);// interpolated
		jumpInput = CrossPlatformInputManager.GetButton (inputSetting.JUMP_AXIS);// non-interpolated, 0, -1, 1
	}

	// Update is called once per frame
	void Update () {// happens one time per frame
		GetInput ();
		Turn ();
	}

	void FixedUpdate () {// happens multiple times per frame
		Run ();
		Jump ();
		rBody.velocity = transform.TransformDirection(velocity);
	}

	void Run () {
		if (Mathf.Abs (forwardInput) > inputSetting.inputDelay) {
			//move
//			rBody.velocity = transform.forward * forwardInput * moveSetting.forwardVel;
			velocity.z = moveSetting.forwardVel * forwardInput;
		} else {
			//zero velocity
//			rBody.velocity = Vector3.zero;
			velocity.z = 0;
		}
	}

	void Turn () {
//		if (Mathf.Abs (turnInput) > inputSetting.inputDelay) {
//			// using the Time.deltaTime means roate the object rotateVel per second
//			targetRotation *= Quaternion.AngleAxis (moveSetting.rotateVel * turnInput * Time.deltaTime, Vector3.up);
//		} 
//		transform.rotation = targetRotation;
		if (Mathf.Abs (turnInput) > inputSetting.inputDelay) {
			velocity.x = moveSetting.turnVel * turnInput; 
		} else {
			velocity.x = 0;
		}
	}
	void Jump () {
		if (jumpInput && Grounded ()) {
			velocity.y = moveSetting.jumpVel;
			//jump
		} 
		else if (!jumpInput && Grounded()) {
			// zero out our velocity.y  
			velocity.y = 0;
		} 
		else {
			//decrease velocity.y
			velocity.y -= physSetting.downAccel;
		}
		Debug.Log ("jumpinput: "+jumpInput);
	}

	public bool isMoving() {
		return forwardInput != 0 || turnInput != 0;
	}

	public void startGame() {
		transform.position = new Vector3 (0, 25, 0);
		moveSetting.distToGround = 26f;
		physSetting.downAccel = 7.0f;
	}
}
