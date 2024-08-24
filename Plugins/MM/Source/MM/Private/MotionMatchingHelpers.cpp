#include "MotionMatchingHelpers.h"

UMotionMatchingHelpers::UMotionMatchingHelpers() {
}

bool UMotionMatchingHelpers::MakeInputDirectionData(FInputPlayerDirectionData& OutInputDirection, const TArray<FTransform>& VectorsWeHaveLeftBehind, const TArray<FVector>& CheckTheseAgainstVWHLB) {
    return false;
}

FString UMotionMatchingHelpers::GetMMAnimDataRecordFilePath() {
    return TEXT("");
}

void UMotionMatchingHelpers::GetLMAnimVelocityReferenceClock(const UAnimSequence* InSequence, const float ReferenceClock, FVector& DeliveredVelocityViaAnimBonesLocalVelocity) {
}

FTransform UMotionMatchingHelpers::GetLastInputDirectionTransform(const FInputPlayerDirectionData& InputDirection) {
    return FTransform{};
}

void UMotionMatchingHelpers::GetKeyPoseDataFromAnim(const UAnimSequence* InSequence, const float ReferenceClock, const TArray<FName>& ToBeRefAgainst, FMotionMatchData& CalculatedMMData) {
}

void UMotionMatchingHelpers::GetDataFromAnimation(const UAnimSequence* InSequence, const float ReferenceClock, const TArray<FName>& SkeletonRuntimeName, FInputPlayerDirectionData& OutPresentInputDirection, FInputPlayerDirectionData& OutFutureInputDirection, TArray<FSkeletonStructure>& DeliveredAnimationReferencesForSkelRef) {
}

void UMotionMatchingHelpers::GetAnimVelocityReferenceClock(const UAnimSequence* InSequence, const float ReferenceClock, FVector& DeliveredVelocityViaAnimBonesLocalVelocity) {
}

void UMotionMatchingHelpers::GetAnimJointData(const UAnimSequence* InSequence, const float ReferenceClock, const FName BoneName, FSkeletonStructure& DeliveredAnimationReferencesForSkelRef, float InDeltaTime) {
}

void UMotionMatchingHelpers::GetAnimBoneWorldTransform(const UAnimSequence* InSequence, const float ReferenceClock, const int32 CurrentSkeletonPartInReference, const TMap<int32, int32>& SkelIdx2TrackIdx, FTransform& CalculatedTransformMM) {
}

void UMotionMatchingHelpers::GetAnimBoneLocalVel(const UAnimSequence* InSequence, const float ReferenceClock, const int32 CurrentSkeletonPartInReference, const TMap<int32, int32>& SkelIdx2TrackIdx, FVector& DeliveredVelocityViaAnimBonesLocalVel) {
}

void UMotionMatchingHelpers::GetAnimBoneLocalTransform(const UAnimSequence* InSequence, const float ReferenceClock, const int32 CurrentSkeletonPartInReference, const TMap<int32, int32>& SkelIdx2TrackIdx, FTransform& CalculatedTransformMM) {
}

void UMotionMatchingHelpers::ExtractLMAnimInputDirection(FInputPlayerDirectionData& DeliveredVelocityViaAnimBonesLocalVelocityData, const UAnimSequence* InSequence, const float ClockInGame) {
}

void UMotionMatchingHelpers::ExtractAnimSmoothedRotation(FQuat& DeliveredRotation, const UAnimSequence* InSequence, const float ClockInGame) {
}

void UMotionMatchingHelpers::ExtractAnimInputDirection(FInputPlayerDirectionData& DeliveredVelocityViaAnimBonesLocalVelocityData, const UAnimSequence* InSequence, const float ClockInGame) {
}

void UMotionMatchingHelpers::CreateInputDirection(FInputPlayerDirectionData& OutConstructTargetDirection, const FTransform& DesiredTransform, const FTransform& RootWorldTransform, const float TargetDirectionInputStrength) {
}

float UMotionMatchingHelpers::CompareTrajectories(const FInputPlayerDirectionData& InputDirectionData_A, const FInputPlayerDirectionData& InputDirectionData_B) {
    return 0.0f;
}

float UMotionMatchingHelpers::CompareJointDatas(const TArray<FSkeletonStructure>& JointData_A, const TArray<FSkeletonStructure>& JointData_B) {
    return 0.0f;
}

void UMotionMatchingHelpers::BlendKeyPoses(const FMotionMatchData& PoseA, const FMotionMatchData& PoseB, const float alpha, FMotionMatchData& OutBlendedKeyPose) {
}


