#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAnimSeqAssetLoadStatType.h"
#include "InputPlayerDirectionData.h"
#include "MMKDTreeNode.h"
#include "MotionMatchingAnimSeqdata.h"
#include "MotionMatchingCostData.h"
#include "MotionMatchingMath.h"
#include "SkeletonStructure.h"
#include "AnimationAnalyzer.generated.h"

class AActor;
class UAnimSequence;
class UAnimationAnalyzer;
class USkeleton;

UCLASS(Blueprintable)
class MM_API UAnimationAnalyzer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* SelectedSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KDTreeNodeRootIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLMAnim;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastMatchedAnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerInputReactionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerRotateReactionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMMKDTreeNode> MMKDTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotionMatchingMath> AnimationReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReferencedJoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> JointWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> AnimationsInMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotionMatchingAnimSeqdata> AnimationSeqSoftDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingAssetSoftRef;
    
    UAnimationAnalyzer();

    UFUNCTION(BlueprintCallable)
    bool TryInitFromAA(const UAnimationAnalyzer* OrgAA);
    
    UFUNCTION(BlueprintCallable)
    int32 StructureForAnimationCalculations(const float ControllerInputReactionSpeedCustom, const float ControllerRotateReactionSpeedCustom, const float VelocityStrength, const float AnimationMatchPower, const FInputPlayerDirectionData& InputDirection, const TArray<FSkeletonStructure>& AllAnimationReferences, const FVector& PresentVel, const float BlendTime, float& CalculatedResult, FMotionMatchingCostData& AnimCostData);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLMAnim(bool bUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 RequireAnimationsLoadAtDesiredReferences(const int32 Ref, bool bLoadAll, UObject* AnimInst);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnimationReference(const int32 CurrentAnimationRef);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationAssetLoadStatChange(const int32 Ref, EAnimSeqAssetLoadStatType Stat, UAnimSequence* Anim);
    
    UFUNCTION(BlueprintCallable)
    void NewAnimationReference(const TArray<UAnimSequence*>& ProvidedAnimationsByUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MMAnimationSeqUsingNotify_Inner(const int32 Ref, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    int32 MatchAnimationByKDTree(const float VelocityStrength, const FInputPlayerDirectionData& InputDirection, const TArray<FSkeletonStructure>& MotionJointData, const FVector& PresentVel, float& MinSquareDis);
    
    UFUNCTION(BlueprintCallable)
    void LoadAllAnimSeqFromSoftRefForCalculatingInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseLMAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoneSelected(const FName& BoneName) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimMathDataValid();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimationExtracted(const FName AnimationRef, const float WorldTime);
    
    UFUNCTION(BlueprintCallable)
    void InitAnimMathDataBySerializedFeatures();
    
    UFUNCTION(BlueprintCallable)
    bool HasSequence(const FName SequenceName);
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetSoftPathByIndex(const int32 Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMotionMatchingMath GetSequenceTimeOfAnimations(const int32 CurrentAnimationKeyframe) const;
    
    UFUNCTION(BlueprintCallable)
    FText GetAnimationShowNameInEditor(const int32 Ref);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnimationCount();
    
    UFUNCTION(BlueprintCallable)
    USkeleton* GetAnimationAnalyzerSkeleton();
    
    UFUNCTION(BlueprintCallable)
    void GatherSkeletonInfo(USkeleton* UserSkeleton, const TArray<FName>& SelectedJoints, const TArray<float>& BoneWeights);
    
    UFUNCTION(BlueprintCallable)
    FName FindUsersSkeletonBoneNames(int32 ReferencedBone);
    
    UFUNCTION(BlueprintCallable)
    int32 FindUserSelectedBones();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* FindAnimationsAtDesiredReferences(const int32 Ref);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* FindAnimationFromSequence(const int32 CurrentAnimationRef);
    
    UFUNCTION(BlueprintCallable)
    int32 CountAnimationReferences();
    
private:
    UFUNCTION(BlueprintCallable)
    void ConstructSerializedFeatures();
    
public:
    UFUNCTION(BlueprintCallable)
    void ConstructAnimationReferences(const int32 FromSourceAnimation);
    
    UFUNCTION(BlueprintCallable)
    void ConstructAllAnimationReferences();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllAnimSeqForCalculatingInEditor();
    
    UFUNCTION(BlueprintCallable)
    void CleanAnimationReferences(const int32 CurrentReferenceAnimation);
    
    UFUNCTION(BlueprintCallable)
    void CleanAllAnimationReferences();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckIsFirstLoadRequireDesireAsset(const int32 Ref);
    
    UFUNCTION(BlueprintCallable)
    bool AnimationReferenceIsValid(const int32 CurrentAnimationRef);
    
    UFUNCTION(BlueprintCallable)
    bool AnimationContextIsValid(const int32 CurrentAnimationRef);
    
    UFUNCTION(BlueprintCallable)
    bool AnimationCalculationsAccepted(const int32 Ref);
    
    UFUNCTION(BlueprintCallable)
    void AnalyzerAnimationReferences(const int32 CurrentReferenceAnimation);
    
};

