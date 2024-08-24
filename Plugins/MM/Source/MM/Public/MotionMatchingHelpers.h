#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputPlayerDirectionData.h"
#include "MotionMatchData.h"
#include "SkeletonStructure.h"
#include "MotionMatchingHelpers.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class MM_API UMotionMatchingHelpers : public UObject {
    GENERATED_BODY()
public:
    UMotionMatchingHelpers();

    UFUNCTION(BlueprintCallable)
    static bool MakeInputDirectionData(FInputPlayerDirectionData& OutInputDirection, const TArray<FTransform>& VectorsWeHaveLeftBehind, const TArray<FVector>& CheckTheseAgainstVWHLB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMMAnimDataRecordFilePath();
    
    UFUNCTION(BlueprintCallable)
    static void GetLMAnimVelocityReferenceClock(const UAnimSequence* InSequence, const float ReferenceClock, FVector& DeliveredVelocityViaAnimBonesLocalVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLastInputDirectionTransform(const FInputPlayerDirectionData& InputDirection);
    
    UFUNCTION(BlueprintCallable)
    static void GetKeyPoseDataFromAnim(const UAnimSequence* InSequence, const float ReferenceClock, const TArray<FName>& ToBeRefAgainst, FMotionMatchData& CalculatedMMData);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataFromAnimation(const UAnimSequence* InSequence, const float ReferenceClock, const TArray<FName>& SkeletonRuntimeName, FInputPlayerDirectionData& OutPresentInputDirection, FInputPlayerDirectionData& OutFutureInputDirection, TArray<FSkeletonStructure>& DeliveredAnimationReferencesForSkelRef);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnimVelocityReferenceClock(const UAnimSequence* InSequence, const float ReferenceClock, FVector& DeliveredVelocityViaAnimBonesLocalVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnimJointData(const UAnimSequence* InSequence, const float ReferenceClock, const FName BoneName, FSkeletonStructure& DeliveredAnimationReferencesForSkelRef, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnimBoneWorldTransform(const UAnimSequence* InSequence, const float ReferenceClock, const int32 CurrentSkeletonPartInReference, const TMap<int32, int32>& SkelIdx2TrackIdx, FTransform& CalculatedTransformMM);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnimBoneLocalVel(const UAnimSequence* InSequence, const float ReferenceClock, const int32 CurrentSkeletonPartInReference, const TMap<int32, int32>& SkelIdx2TrackIdx, FVector& DeliveredVelocityViaAnimBonesLocalVel);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnimBoneLocalTransform(const UAnimSequence* InSequence, const float ReferenceClock, const int32 CurrentSkeletonPartInReference, const TMap<int32, int32>& SkelIdx2TrackIdx, FTransform& CalculatedTransformMM);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractLMAnimInputDirection(FInputPlayerDirectionData& DeliveredVelocityViaAnimBonesLocalVelocityData, const UAnimSequence* InSequence, const float ClockInGame);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractAnimSmoothedRotation(FQuat& DeliveredRotation, const UAnimSequence* InSequence, const float ClockInGame);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractAnimInputDirection(FInputPlayerDirectionData& DeliveredVelocityViaAnimBonesLocalVelocityData, const UAnimSequence* InSequence, const float ClockInGame);
    
    UFUNCTION(BlueprintCallable)
    static void CreateInputDirection(FInputPlayerDirectionData& OutConstructTargetDirection, const FTransform& DesiredTransform, const FTransform& RootWorldTransform, const float TargetDirectionInputStrength);
    
    UFUNCTION(BlueprintCallable)
    static float CompareTrajectories(const FInputPlayerDirectionData& InputDirectionData_A, const FInputPlayerDirectionData& InputDirectionData_B);
    
    UFUNCTION(BlueprintCallable)
    static float CompareJointDatas(const TArray<FSkeletonStructure>& JointData_A, const TArray<FSkeletonStructure>& JointData_B);
    
    UFUNCTION(BlueprintCallable)
    static void BlendKeyPoses(const FMotionMatchData& PoseA, const FMotionMatchData& PoseB, const float alpha, FMotionMatchData& OutBlendedKeyPose);
    
};

