#include "QuadrupedIKSubAnimInstance.h"

UQuadrupedIKSubAnimInstance::UQuadrupedIKSubAnimInstance()
{
	this->_enableIK = false;
	this->_traceTypeQuery = TraceTypeQuery1;
	this->_traceComplex = true;
	this->_ignoreTouches = true;
	this->_noGroundTag = TEXT("IkNoGround");
	this->_adjustCamera = true;
	this->_adjustTail = true;
	this->_firstPersonView = false;
	this->_footIkSpeed = 50.000000;
	this->_pelvisIkSpeed = 15.000000;
	this->_pelvisIkSpeedFPV = 1.000000;
	this->_maxIKTargetDistance = 70.000000;
	this->_maxBoneDistanceFromTargetMoving = 10.000000;
	this->_maxBoneDistanceFromTargetIdle = 5.000000;
	this->_minDistanceFromCapsuleFrontFeetIdle = -30.000000;
	this->_maxDistanceFromCapsuleFrontFeetIdle = 85.000000;
	this->_minDistanceFromCapsuleBackFeetIdle = -200.000000;
	this->_maxDistanceFromCapsuleBackFeetIdle = 200.000000;
	this->_minDistanceFromCapsuleFrontFeetMoving = -110.000000;
	this->_maxDistanceFromCapsuleFrontFeetMoving = 85.000000;
	this->_minDistanceFromCapsuleBackFeetMoving = -250.000000;
	this->_maxDistanceFromCapsuleBackFeetMoving = 100.000000;
	this->_maxIKTargetDistanceFromPose = 70.000000;
	this->_pelvisRotationMinOffset = -35.000000;
	this->_pelvisRotationMaxOffset = 35.000000;
	this->_pelvisPositionOffsetMin = -55.000000;
	this->_pelvisPositionOffsetMax = 10.000000;
	this->_pelvisPositionOffsetMinFPV = 0.000000;
	this->_pelvisPositionOffsetMaxFPV = 0.000000;
	this->_frontFeetLineTraceStartOffset = 200.000000;
	this->_frontFeetLineTraceEndOffset = -300.000000;
	this->_backFeetLineTraceStartOffset = 200.000000;
	this->_backFeetLineTraceEndOffset = -300.000000;
	this->_frontFeetUpDisplacement = 20.000000;
	this->_frontFeetDownDisplacement = -70.000000;
	this->_backFeetUpDisplacement = 20.000000;
	this->_backFeetDownDisplacement = -120.000000;
	this->_footDistance = 40.000000;
	this->_isMovingTolerance = 0.100000;
	this->_ungroundedFeetDistance = 20.000000;
	this->_pelvisSocketName = TEXT("joint_Pelvis_01");
	this->_cameraSocketName = TEXT("joint_Cam_02");
	this->_tailSocketName = TEXT("joint_Tail_01");
	this->_leftFrontFootSocketName = TEXT("joint_Hand_LT_02_IK");
	this->_leftFrontFootPoleSocketName = TEXT("joint_Hand_LT_02_Pole");
	this->_rightFrontFootSocketName = TEXT("joint_Hand_RT_02_IK");
	this->_rightFrontFootPoleSocketName = TEXT("joint_Hand_RT_02_Pole");
	this->_leftBackFootSocketName = TEXT("joint_Foot_LT_01_IK");
	this->_rightBackFootSocketName = TEXT("joint_Foot_RT_01_IK");
	this->_leftFrontFootBoneName = TEXT("joint_HandLT_01");
	this->_rightFrontFootBoneName = TEXT("joint_HandRT_01");
	this->_leftBackFootBoneName = TEXT("joint_ToeLT_01");
	this->_rightBackFootBoneName = TEXT("joint_ToeRT_01");
	this->_leftFrontFootRootSocketName = TEXT("joint_ShoulderLT_01");
	this->_rightFrontFootRootSocketName = TEXT("joint_ShoulderRT_01");
	this->_leftBackFootRootSocketName = TEXT("joint_KneeLT_01");
	this->_rightBackFootRootSocketName = TEXT("joint_KneeRT_01");
	this->_leftFrontFootMaxExtension = 80.000000;
	this->_rightFrontFootMaxExtension = 80.000000;
	this->_leftBackFootMaxExtension = 100.000000;
	this->_rightBackFootMaxExtension = 100.000000;
	this->_leftFrontFootUngroundedTolerance = 30.000000;
	this->_rightFrontFootUngroundedTolerance = 30.000000;
	this->_leftBackFootUngroundedTolerance = 30.000000;
	this->_rightBackFootUngroundedTolerance = 30.000000;
	this->_skeletalMeshComponent = NULL;
	this->_world = NULL;
}
