using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	public Transform target;
	public float lookSmooth = 0.09f;
//	public Vector3 offsetFromTarget = new Vector3 (0, 6 , -8);
//	public float xTilt = 10;

//	Vector3 destination = Vector3.zero;
	CharacterController charController;
	float rotateVel = 0;

	// Use this for initialization
	void Start () {
		SetCameraTarget (target);
	}

    public void SetCameraTarget(Transform t) { // set a camera a new target
		target = t;
		if (target != null) {
			if (target.GetComponent<CharacterController> ()) {
				charController = target.GetComponent<CharacterController> ();
			} else {
				Debug.LogError ("The camera target needs a character controller.");
			}
		} else{
			Debug.LogError ("Your camera needs a target.");
		}
	}

	void LateUpdate() {// happends only after update call, make the rotation based on the previous state of the character
		// rotate target
		Debug.Log("Moving state: " + charController.isMoving());
		if (charController.isMoving()) {
			rotateTarget();
		}
//		// moving
//		MoveToTarget();
//		// rotating
//		LookAtTarget();
	}

	void rotateTarget() {
//		float angle = SignedAngleBetween(transform.position, target.position, Vector3.up);
//		float angle = transform.eulerAngles.y - target.eulerAngles.y;
//		Debug.Log ("the angle between camera and target is " + angle);
//		target.rotation.y = transform.eulerAngles.y;
		float eulerYAngle = Mathf.SmoothDampAngle (transform.eulerAngles.y, target.eulerAngles.y, ref rotateVel, lookSmooth);
		target.rotation = Quaternion.Euler (0, eulerYAngle, 0);
	}

	float SignedAngleBetween(Vector3 a, Vector3 b, Vector3 n){
		// angle in [0,180]
		float angle = Vector3.Angle(a,b);
		float sign = Mathf.Sign(Vector3.Dot(n,Vector3.Cross(a,b)));

		// angle in [-179,180]
		float signed_angle = angle * sign;

		// angle in [0,360] (not used but included here for completeness)
		//float angle360 =  (signed_angle + 180) % 360;

		return signed_angle;
	}

//	void MoveToTarget() {
//		destination = charController.TargetRotation * offsetFromTarget;
//		destination += target.position;
//		transform.position = destination;
//	}
//
//	void LookAtTarget() {
//		float eulerYAngle = Mathf.SmoothDampAngle (transform.eulerAngles.y, target.eulerAngles.y, ref rotateVel, lookSmooth);
//		transform.rotation = Quaternion.Euler (transform.eulerAngles.x, eulerYAngle, 0);
//	}
}
