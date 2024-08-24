#include "GSE_SkeletalMeshFuncLib.h"

UGSE_SkeletalMeshFuncLib::UGSE_SkeletalMeshFuncLib() {
}

void UGSE_SkeletalMeshFuncLib::UpdateUROParams(AActor* OwnerActor, const TArray<float>& BaseVisibleDistanceFactorThesholds, int32 BaseNonRenderedUpdateRate) {
}

void UGSE_SkeletalMeshFuncLib::SetUpdateOverlapsOnAnimationFinalize(USkeletalMeshComponent* SKComp, bool bVal) {
}

void UGSE_SkeletalMeshFuncLib::SetTextureParameterValueOnMaterials(UMeshComponent* MeshComp, const FName& ParameterName, UTexture* ParameterValue) {
}

void UGSE_SkeletalMeshFuncLib::SetBodyInstanceShapeCollisionEnable(USkeletalMeshComponent* SkMeshComp, FName BoneName, int32 ShapeIndex, TEnumAsByte<ECollisionEnabled::Type> NewType, bool bUpdatePhysicsFilterData, bool bGetWelded) {
}

void UGSE_SkeletalMeshFuncLib::SetBodyInstanceCollisionProfileName(USkeletalMeshComponent* SkMeshComp, FName BoneName, FName InCollisionProfileName, bool bGetWelded) {
}

void UGSE_SkeletalMeshFuncLib::SetBodyInstanceCollisionEnable(USkeletalMeshComponent* SkMeshComp, FName BoneName, TEnumAsByte<ECollisionEnabled::Type> NewType, bool bUpdatePhysicsFilterData, bool bGetWelded) {
}

void UGSE_SkeletalMeshFuncLib::SetBodyInstanceAutoWeld(USkeletalMeshComponent* SkMeshComp, FName BoneName, bool bAutoWeld, bool bGetWelded) {
}

void UGSE_SkeletalMeshFuncLib::SetAllBodiesShapeCollisionEnabled(const USkeletalMeshComponent* SKComp, TEnumAsByte<ECollisionEnabled::Type> Type, bool bUpdateFilterData) {
}

bool UGSE_SkeletalMeshFuncLib::IsCPUAccess(USkeletalMesh* SKMesh) {
    return false;
}

void UGSE_SkeletalMeshFuncLib::GS_SetEndPhysicsTickEnabled(USkeletalMeshComponent* SKComp, bool bVal) {
}

bool UGSE_SkeletalMeshFuncLib::GetUROResult(AActor* OwnerActor, float& OutAccumulatedDeltaTime) {
    return false;
}

FTransform UGSE_SkeletalMeshFuncLib::GetRefPoseTransform(USkinnedMeshComponent* MeshComp, int32 BoneIndex, bool bIsLocal) {
    return FTransform{};
}

int32 UGSE_SkeletalMeshFuncLib::GetNumOverrideMaterials(const USkeletalMeshComponent* SKComp) {
    return 0;
}

int32 UGSE_SkeletalMeshFuncLib::GetLODSettingsGroupNum(USkeletalMeshLODSettings* LODSettings) {
    return 0;
}

TEnumAsByte<ECollisionEnabled::Type> UGSE_SkeletalMeshFuncLib::GetBodyInstanceShapeCollisionEnable(USkeletalMeshComponent* SkMeshComp, FName BoneName, int32 ShapeIndex, bool bGetWelded) {
    return ECollisionEnabled::NoCollision;
}

FName UGSE_SkeletalMeshFuncLib::GetBodyInstanceCollisionProfileName(USkeletalMeshComponent* SkMeshComp, FName BoneName, bool bGetWelded) {
    return NAME_None;
}

void UGSE_SkeletalMeshFuncLib::BakeSkinInfoToUVs(USkeletalMesh* TargetSkeletalMesh) {
}


