#include "GSE_AnimFuncLib.h"

UGSE_AnimFuncLib::UGSE_AnimFuncLib() {
}

void UGSE_AnimFuncLib::TickAnimationAndRefreshBone_SkeletalMesh(USkeletalMeshComponent* SkeletalMeshComp) {
}

void UGSE_AnimFuncLib::TickAnimationAndRefreshBone(AActor* Owner) {
}

void UGSE_AnimFuncLib::TickAnimation(AActor* Owner) {
}

void UGSE_AnimFuncLib::StopAllMontages(AActor* Owner, float BlendOutTime) {
}

void UGSE_AnimFuncLib::SetRootMotionFromEverythingSwitch(ACharacter* Character, bool IsOpen) {
}

void UGSE_AnimFuncLib::SetMaterial(UMaterialInterface* Material, UDestructibleMesh* TargetMesh, int32 Index) {
}

void UGSE_AnimFuncLib::SetBlendSpaceInput(USkeletalMeshComponent* Obj, FVector BlendParams) {
}

bool UGSE_AnimFuncLib::SetAnimcurveType(USkeleton* Skeleton, const FString& CurveName, bool Value) {
    return false;
}

FTransform UGSE_AnimFuncLib::Sequence_GetRelativeBoneTransformCS(const UAnimSequence* AnimSeq, const float InTime, const FName BoneName, bool bExtractRootMotion) {
    return FTransform{};
}

FTransform UGSE_AnimFuncLib::Sequence_GetBoneTransformCS(const UAnimSequence* AnimSeq, const float InTime, const FName BoneName, bool bExtractRootMotion) {
    return FTransform{};
}

bool UGSE_AnimFuncLib::RemovePreviewAssetFromSkeleton(USkeleton* InUSkeleton, const FString& BoneName) {
    return false;
}

void UGSE_AnimFuncLib::RemoveNotifyTrackByName(UAnimMontage* TargetMontage, FName Name) {
}

void UGSE_AnimFuncLib::RemoveNotifyEventByIndex(UAnimMontage* TargetMontage, int32 Index) {
}

bool UGSE_AnimFuncLib::RemoveAllPoints(UBlendSpace* BlendSpace) {
    return false;
}

void UGSE_AnimFuncLib::ReinitAnim(AActor* Owner) {
}

FTransform UGSE_AnimFuncLib::Montage_GetBoneTransformCS(const UAnimMontage* InMontage, const float InTime, const FName InBoneName, const FName InSlotName, bool bExtractRootMotion) {
    return FTransform{};
}

FTransform UGSE_AnimFuncLib::Montage_GetBoneRelativeTransformCS(const UAnimMontage* InMontage, const float InTime, const FName InBoneName, const FName InSlotName, bool bExtractRootMotion) {
    return FTransform{};
}

void UGSE_AnimFuncLib::MarkDirty(UObject* Obj) {
}

bool UGSE_AnimFuncLib::IsSlotPlayingMontage(UAnimInstance* AnimInst, FName SlotNodeName) {
    return false;
}

bool UGSE_AnimFuncLib::IsInRootMotionAM(ACharacter* Character) {
    return false;
}

void UGSE_AnimFuncLib::InitAnimGraphNode(UAnimInstance* AnimInst, const FName Tag) {
}

USkeleton* UGSE_AnimFuncLib::GetSkeleton(UAnimSequenceBase* AnimSequenceBase) {
    return NULL;
}

void UGSE_AnimFuncLib::GetOneAnimAllNotifyEventIncludeAS(UAnimSequenceBase* TargetAnim, TArray<FAnimNotifyEvent>& AnimNotifyEventList) {
}

float UGSE_AnimFuncLib::GetNotifyTriggerTime(FAnimNotifyEvent AnimNotifyEvent) {
    return 0.0f;
}

float UGSE_AnimFuncLib::GetNotifyEndTriggerTime(FAnimNotifyEvent AnimNotifyEvent) {
    return 0.0f;
}

float UGSE_AnimFuncLib::GetNotifyComboEndTime(UAnimMontage* AnimInst, int32 Index) {
    return 0.0f;
}

FName UGSE_AnimFuncLib::GetMontageSlotName(const UAnimMontage* Montage, int32 SlotIndex) {
    return NAME_None;
}

void UGSE_AnimFuncLib::GetMontageSectionStartAndEndTime(UAnimMontage* AnimMontage, const FName& SectionName, float& OutStartTime, float& OutEndTime) {
}

FName UGSE_AnimFuncLib::GetMontageSectionName(UAnimMontage* AnimMontage, int32 Index) {
    return NAME_None;
}

float UGSE_AnimFuncLib::GetMontageNotifyTriggerTime(UAnimMontage* AnimInst, int32 FromInstanceID) {
    return 0.0f;
}

FString UGSE_AnimFuncLib::GetMontageNotifyName(UAnimMontage* AnimInst, int32 Index) {
    return TEXT("");
}

FName UGSE_AnimFuncLib::GetMontageNextSection(UAnimInstance* AnimInstance, UAnimMontage* AnimMontage) {
    return NAME_None;
}

int32 UGSE_AnimFuncLib::GetMontageEffectID(UAnimMontage* AnimInst, int32 Index) {
    return 0;
}

int32 UGSE_AnimFuncLib::GetMontageComboSkillID(UAnimMontage* AnimInst, int32 Index) {
    return 0;
}

FString UGSE_AnimFuncLib::GetFolderPathFromFullPath(const FString& FullPath) {
    return TEXT("");
}

int32 UGSE_AnimFuncLib::GetCurrentActiveMontageInstanceID(ACharacter* Character) {
    return 0;
}

void UGSE_AnimFuncLib::GetChildSockets(USkeletalMeshComponent* SkeletalMeshComp, const FName& BaseBoneName, TArray<FName>& ChildSocketNames) {
}

int32 UGSE_AnimFuncLib::GetChildBones(USkeleton* InSkeleton, const FName& ParentBoneName, const TArray<FName>& BoneNameFilter, TSet<FName>& ChildBones) {
    return 0;
}

FTransform UGSE_AnimFuncLib::GetBoneTransformByTime(UAnimSequence* AnimationSequence, float Time, int32 TrackIndex, bool UseRawData) {
    return FTransform{};
}

FTransform UGSE_AnimFuncLib::GetBoneTransform(USkeletalMeshComponent* Mesh, int32 BoneIndex) {
    return FTransform{};
}

float UGSE_AnimFuncLib::GetAnimCurrentTime(UAnimInstance* AnimInst, int32 FromInstanceID) {
    return 0.0f;
}

void UGSE_AnimFuncLib::GetAnimAllNotifyEventIncludeAS(TArray<UAnimSequenceBase*> AnimBases, TArray<FAnimNotifyEvent>& AnimNotifyEventList) {
}

TArray<FAnimNotifyEvent> UGSE_AnimFuncLib::GetAllNotifyEventInAM(UAnimMontage* TargetMontage, TArray<FGSNotifyEventTimeInfo>& TimeInfoList) {
    return TArray<FAnimNotifyEvent>();
}

void UGSE_AnimFuncLib::GetAllNotifyEvent(UAnimMontage* TargetMontage, TArray<FAnimNotifyEvent>& AnimNotifyEventList) {
}

bool UGSE_AnimFuncLib::GetAllAnimSyncMarkers(const UAnimSequence* AnimSequence, TArray<FAnimSyncMarker>& OutSyncMarkers) {
    return false;
}

TArray<UAnimationAsset*> UGSE_AnimFuncLib::GetAllAnimationsOfSkeleton(USkeletalMesh* SkeletonMesh, const FString& AnimationBasePath) {
    return TArray<UAnimationAsset*>();
}

int32 UGSE_AnimFuncLib::GetActiveMontageInstanceID(const UAnimInstance* AnimInstance) {
    return 0;
}

bool UGSE_AnimFuncLib::GenerateDestructibleComponentFromPathWithEditor(const FString& FolderPath, UObject* TargetActor) {
    return false;
}

bool UGSE_AnimFuncLib::GenerateDestructibleComponentFromPath(const FString& FolderPath, USkeletalMeshComponent* TargetSkeletalMeshComp, TArray<UDestructibleComponent*>& DestructibleMeshArray, TArray<FName>& BoneNameArray) {
    return false;
}

bool UGSE_AnimFuncLib::GenerateDefaultAxisParameters(UBlendSpace* BlendSpace) {
    return false;
}

bool UGSE_AnimFuncLib::GenerateAimOffsetBlendSpace(UAimOffsetBlendSpace* AimOffset, const FString& Path, const FString& ExampleName) {
    return false;
}

UObject* UGSE_AnimFuncLib::FindDestructibleMeshFromPathByBoneName(const FString& FolderPath, const FString& BoneName) {
    return NULL;
}

void UGSE_AnimFuncLib::FindAsset(const FString& Path, UClass* InClass, TArray<FAssetData>& AssetData) {
}

FTransform UGSE_AnimFuncLib::ExtractRootMotionFromAnimation(const UAnimSequenceBase* Animation, float StartTime, float EndTime) {
    return FTransform{};
}

void UGSE_AnimFuncLib::DisableMontageRootMotionByInstanceID(ACharacter* Character, int32 MontageInstanceID) {
}

UBlendSpace1D* UGSE_AnimFuncLib::CreateBlendSpace1D(const FString& Path, const FString& Name, USkeleton* TargetSkeleton) {
    return NULL;
}

UBlendSpace* UGSE_AnimFuncLib::CreateBlendSpace(const FString& Path, const FString& Name, USkeleton* TargetSkeleton) {
    return NULL;
}

UAnimMontage* UGSE_AnimFuncLib::CreateAnimMontage(const FString& Path, const FString& Name, USkeleton* TargetSkeleton) {
    return NULL;
}

UAimOffsetBlendSpace* UGSE_AnimFuncLib::CreateAimOffsetBlendSpace(const FString& Path, const FString& Name, USkeleton* TargetSkeleton) {
    return NULL;
}

void UGSE_AnimFuncLib::ConditionallyDispatchQueuedAnimEvents(USkeletalMeshComponent* SkeletalMeshComp) {
}

bool UGSE_AnimFuncLib::ChangeAnimSeqParamAndSave(UAnimSequence* AnimMontage, bool bRootMotion, bool bForceRootLock) {
    return false;
}

float UGSE_AnimFuncLib::CalcSlotMontageLocalWeight(UAnimInstance* AnimInst, const FName& SlotNodeName) {
    return 0.0f;
}

void UGSE_AnimFuncLib::ApplyRadiusDamage(UDestructibleComponent* Destructible, float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
}

void UGSE_AnimFuncLib::ApplyDamage(UDestructibleComponent* Destructible, float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength) {
}

bool UGSE_AnimFuncLib::AnimSequenceGetRootMotionRotationForScale(UAnimSequence* AnimMontage, FQuat& OutStartPos, FQuat& OutEndPos, float LeftScaleTime, float RightScaleTime) {
    return false;
}

bool UGSE_AnimFuncLib::AnimSequenceGetRootMotionLocationForScale(UAnimSequence* AnimMontage, FVector& OutStartPos, FVector& OutEndPos, float LeftScaleTime, float RightScaleTime) {
    return false;
}

float UGSE_AnimFuncLib::AnimSequenceFindPosWithDistanceCurve(UAnimSequence* AnimationSequence, FName CurveName, float DistanceValue) {
    return 0.0f;
}

bool UGSE_AnimFuncLib::AnimMontageGetSocketLocationForScale(UAnimMontage* AnimMontage, FVector& OutEndPos, float ScaleTime, const FString& SocketName) {
    return false;
}

bool UGSE_AnimFuncLib::AnimMontageGetRootMotionRotationForScale(UAnimMontage* AnimMontage, FRotator& OutStartRotation, FRotator& OutEndRotation, float LeftScaleTime, float RightScaleTime) {
    return false;
}

bool UGSE_AnimFuncLib::AnimMontageGetRootMotionLocationForScale(UAnimMontage* AnimMontage, FVector& OutStartPos, FVector& OutEndPos, float LeftScaleTime, float RightScaleTime) {
    return false;
}

FTransform UGSE_AnimFuncLib::AnimMontageGetQTEBoneTransform(UAnimMontage* AnimMontage, const USkeletalMeshComponent* MeshComponent, FName BoneName, float Pos) {
    return FTransform{};
}

float UGSE_AnimFuncLib::AnimMontageGetMontageEndTimeForScale(UAnimMontage* AnimMontage) {
    return 0.0f;
}

FTransform UGSE_AnimFuncLib::AnimMontageGetBoneTransformWS(UAnimMontage* AnimMontage, const USkeletalMeshComponent* MeshComponent, FName BoneName, float Pos, bool IsNeedFixRotator, FRotator FixRotator) {
    return FTransform{};
}

void UGSE_AnimFuncLib::AnimMontageGetBlendInAndOutTime(UAnimMontage* AnimMontage, float& BlendInTime, float& BlendOutTime) {
}

void UGSE_AnimFuncLib::AnimInstanceMontageSetPos(UAnimInstance* AnimInst, float MontagePos) {
}

bool UGSE_AnimFuncLib::AddSocketToSkeleton(USkeleton* InUSkeleton, const FString& BoneName, const FString& SocketName, const FTransform& Offset) {
    return false;
}

bool UGSE_AnimFuncLib::AddPreviewAssetToSkeleton(USkeleton* InUSkeleton, const FString& BoneName, UObject* PreviewAsset) {
    return false;
}

bool UGSE_AnimFuncLib::AddPoint(UBlendSpace* BlendSpace, UAnimSequence* PointSequence, FVector PointValue) {
    return false;
}

bool UGSE_AnimFuncLib::AddAnimSequence(UAnimMontage* TargetMontage, UAnimSequence* Sequence) {
    return false;
}

float UGSE_AnimFuncLib::ABPStateMachineGetGlobalWeight(UAnimInstance* AnimInst, const FName& StateMachineName, const FName& StateName) {
    return 0.0f;
}


