#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "Animation/AnimTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSNotifyEventTimeInfo.h"
#include "GSE_AnimFuncLib.generated.h"

class AActor;
class ACharacter;
class UAimOffsetBlendSpace;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UAnimationAsset;
class UBlendSpace;
class UBlendSpace1D;
class UDestructibleComponent;
class UDestructibleMesh;
class UMaterialInterface;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeleton;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_AnimFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_AnimFuncLib();

    UFUNCTION(BlueprintCallable)
    static void TickAnimationAndRefreshBone_SkeletalMesh(USkeletalMeshComponent* SkeletalMeshComp);
    
    UFUNCTION(BlueprintCallable)
    static void TickAnimationAndRefreshBone(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void TickAnimation(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllMontages(AActor* Owner, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetRootMotionFromEverythingSwitch(ACharacter* Character, bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterial(UMaterialInterface* Material, UDestructibleMesh* TargetMesh, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlendSpaceInput(USkeletalMeshComponent* Obj, FVector BlendParams);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAnimcurveType(USkeleton* Skeleton, const FString& CurveName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static FTransform Sequence_GetRelativeBoneTransformCS(const UAnimSequence* AnimSeq, const float InTime, const FName BoneName, bool bExtractRootMotion);
    
    UFUNCTION(BlueprintCallable)
    static FTransform Sequence_GetBoneTransformCS(const UAnimSequence* AnimSeq, const float InTime, const FName BoneName, bool bExtractRootMotion);
    
    UFUNCTION(BlueprintCallable)
    static bool RemovePreviewAssetFromSkeleton(USkeleton* InUSkeleton, const FString& BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNotifyTrackByName(UAnimMontage* TargetMontage, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNotifyEventByIndex(UAnimMontage* TargetMontage, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveAllPoints(UBlendSpace* BlendSpace);
    
    UFUNCTION(BlueprintCallable)
    static void ReinitAnim(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static FTransform Montage_GetBoneTransformCS(const UAnimMontage* InMontage, const float InTime, const FName InBoneName, const FName InSlotName, bool bExtractRootMotion);
    
    UFUNCTION(BlueprintCallable)
    static FTransform Montage_GetBoneRelativeTransformCS(const UAnimMontage* InMontage, const float InTime, const FName InBoneName, const FName InSlotName, bool bExtractRootMotion);
    
    UFUNCTION(BlueprintCallable)
    static void MarkDirty(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSlotPlayingMontage(UAnimInstance* AnimInst, FName SlotNodeName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInRootMotionAM(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void InitAnimGraphNode(UAnimInstance* AnimInst, const FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeleton* GetSkeleton(UAnimSequenceBase* AnimSequenceBase);
    
    UFUNCTION(BlueprintCallable)
    static void GetOneAnimAllNotifyEventIncludeAS(UAnimSequenceBase* TargetAnim, TArray<FAnimNotifyEvent>& AnimNotifyEventList);
    
    UFUNCTION(BlueprintCallable)
    static float GetNotifyTriggerTime(FAnimNotifyEvent AnimNotifyEvent);
    
    UFUNCTION(BlueprintCallable)
    static float GetNotifyEndTriggerTime(FAnimNotifyEvent AnimNotifyEvent);
    
    UFUNCTION(BlueprintCallable)
    static float GetNotifyComboEndTime(UAnimMontage* AnimInst, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMontageSlotName(const UAnimMontage* Montage, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetMontageSectionStartAndEndTime(UAnimMontage* AnimMontage, const FName& SectionName, float& OutStartTime, float& OutEndTime);
    
    UFUNCTION(BlueprintCallable)
    static FName GetMontageSectionName(UAnimMontage* AnimMontage, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static float GetMontageNotifyTriggerTime(UAnimMontage* AnimInst, int32 FromInstanceID);
    
    UFUNCTION(BlueprintCallable)
    static FString GetMontageNotifyName(UAnimMontage* AnimInst, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FName GetMontageNextSection(UAnimInstance* AnimInstance, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMontageEffectID(UAnimMontage* AnimInst, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMontageComboSkillID(UAnimMontage* AnimInst, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFolderPathFromFullPath(const FString& FullPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentActiveMontageInstanceID(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void GetChildSockets(USkeletalMeshComponent* SkeletalMeshComp, const FName& BaseBoneName, TArray<FName>& ChildSocketNames);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChildBones(USkeleton* InSkeleton, const FName& ParentBoneName, const TArray<FName>& BoneNameFilter, TSet<FName>& ChildBones);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetBoneTransformByTime(UAnimSequence* AnimationSequence, float Time, int32 TrackIndex, bool UseRawData);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetBoneTransform(USkeletalMeshComponent* Mesh, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable)
    static float GetAnimCurrentTime(UAnimInstance* AnimInst, int32 FromInstanceID);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnimAllNotifyEventIncludeAS(TArray<UAnimSequenceBase*> AnimBases, TArray<FAnimNotifyEvent>& AnimNotifyEventList);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAnimNotifyEvent> GetAllNotifyEventInAM(UAnimMontage* TargetMontage, TArray<FGSNotifyEventTimeInfo>& TimeInfoList);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllNotifyEvent(UAnimMontage* TargetMontage, TArray<FAnimNotifyEvent>& AnimNotifyEventList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllAnimSyncMarkers(const UAnimSequence* AnimSequence, TArray<FAnimSyncMarker>& OutSyncMarkers);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAnimationAsset*> GetAllAnimationsOfSkeleton(USkeletalMesh* SkeletonMesh, const FString& AnimationBasePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActiveMontageInstanceID(const UAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateDestructibleComponentFromPathWithEditor(const FString& FolderPath, UObject* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateDestructibleComponentFromPath(const FString& FolderPath, USkeletalMeshComponent* TargetSkeletalMeshComp, TArray<UDestructibleComponent*>& DestructibleMeshArray, TArray<FName>& BoneNameArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateDefaultAxisParameters(UBlendSpace* BlendSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateAimOffsetBlendSpace(UAimOffsetBlendSpace* AimOffset, const FString& Path, const FString& ExampleName);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FindDestructibleMeshFromPathByBoneName(const FString& FolderPath, const FString& BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindAsset(const FString& Path, UClass* InClass, TArray<FAssetData>& AssetData);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootMotionFromAnimation(const UAnimSequenceBase* Animation, float StartTime, float EndTime);
    
    UFUNCTION(BlueprintCallable)
    static void DisableMontageRootMotionByInstanceID(ACharacter* Character, int32 MontageInstanceID);
    
    UFUNCTION(BlueprintCallable)
    static UBlendSpace1D* CreateBlendSpace1D(const FString& Path, const FString& Name, USkeleton* TargetSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static UBlendSpace* CreateBlendSpace(const FString& Path, const FString& Name, USkeleton* TargetSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* CreateAnimMontage(const FString& Path, const FString& Name, USkeleton* TargetSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static UAimOffsetBlendSpace* CreateAimOffsetBlendSpace(const FString& Path, const FString& Name, USkeleton* TargetSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static void ConditionallyDispatchQueuedAnimEvents(USkeletalMeshComponent* SkeletalMeshComp);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeAnimSeqParamAndSave(UAnimSequence* AnimMontage, bool bRootMotion, bool bForceRootLock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcSlotMontageLocalWeight(UAnimInstance* AnimInst, const FName& SlotNodeName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyRadiusDamage(UDestructibleComponent* Destructible, float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDamage(UDestructibleComponent* Destructible, float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);
    
    UFUNCTION(BlueprintCallable)
    static bool AnimSequenceGetRootMotionRotationForScale(UAnimSequence* AnimMontage, FQuat& OutStartPos, FQuat& OutEndPos, float LeftScaleTime, float RightScaleTime);
    
    UFUNCTION(BlueprintCallable)
    static bool AnimSequenceGetRootMotionLocationForScale(UAnimSequence* AnimMontage, FVector& OutStartPos, FVector& OutEndPos, float LeftScaleTime, float RightScaleTime);
    
    UFUNCTION(BlueprintCallable)
    static float AnimSequenceFindPosWithDistanceCurve(UAnimSequence* AnimationSequence, FName CurveName, float DistanceValue);
    
    UFUNCTION(BlueprintCallable)
    static bool AnimMontageGetSocketLocationForScale(UAnimMontage* AnimMontage, FVector& OutEndPos, float ScaleTime, const FString& SocketName);
    
    UFUNCTION(BlueprintCallable)
    static bool AnimMontageGetRootMotionRotationForScale(UAnimMontage* AnimMontage, FRotator& OutStartRotation, FRotator& OutEndRotation, float LeftScaleTime, float RightScaleTime);
    
    UFUNCTION(BlueprintCallable)
    static bool AnimMontageGetRootMotionLocationForScale(UAnimMontage* AnimMontage, FVector& OutStartPos, FVector& OutEndPos, float LeftScaleTime, float RightScaleTime);
    
    UFUNCTION(BlueprintCallable)
    static FTransform AnimMontageGetQTEBoneTransform(UAnimMontage* AnimMontage, const USkeletalMeshComponent* MeshComponent, FName BoneName, float Pos);
    
    UFUNCTION(BlueprintCallable)
    static float AnimMontageGetMontageEndTimeForScale(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static FTransform AnimMontageGetBoneTransformWS(UAnimMontage* AnimMontage, const USkeletalMeshComponent* MeshComponent, FName BoneName, float Pos, bool IsNeedFixRotator, FRotator FixRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AnimMontageGetBlendInAndOutTime(UAnimMontage* AnimMontage, float& BlendInTime, float& BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void AnimInstanceMontageSetPos(UAnimInstance* AnimInst, float MontagePos);
    
    UFUNCTION(BlueprintCallable)
    static bool AddSocketToSkeleton(USkeleton* InUSkeleton, const FString& BoneName, const FString& SocketName, const FTransform& Offset);
    
    UFUNCTION(BlueprintCallable)
    static bool AddPreviewAssetToSkeleton(USkeleton* InUSkeleton, const FString& BoneName, UObject* PreviewAsset);
    
    UFUNCTION(BlueprintCallable)
    static bool AddPoint(UBlendSpace* BlendSpace, UAnimSequence* PointSequence, FVector PointValue);
    
    UFUNCTION(BlueprintCallable)
    static bool AddAnimSequence(UAnimMontage* TargetMontage, UAnimSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ABPStateMachineGetGlobalWeight(UAnimInstance* AnimInst, const FName& StateMachineName, const FName& StateName);
    
};

