#include "BGUFuncLibProjectile.h"

UBGUFuncLibProjectile::UBGUFuncLibProjectile() {
}

int32 UBGUFuncLibProjectile::GetProjectileType(int32 ProjectileID) {
    return 0;
}

TArray<BuffAndSkillEffectType> UBGUFuncLibProjectile::GetBuffEffectTypes(int32 BuffID) {
    return TArray<BuffAndSkillEffectType>();
}

AActor* UBGUFuncLibProjectile::GetCtrProjectileByID(ABGUCharacterCS* CurCharacter, int32 ProjectileID) {
    return NULL;
}

void UBGUFuncLibProjectile::CheckCompHasChildComp(TArray<FString>& ErrorBPPathList) {
}

TArray<int32> UBGUFuncLibProjectile::CheckBuffUsedInBullet() {
    return TArray<int32>();
}

bool UBGUFuncLibProjectile::CheckOutAllProjectileBP(FString& CheckOutMap) {
    return false;
}

bool UBGUFuncLibProjectile::FindProjectileAboutFlame(FString& ErrorLog) {
    return false;
}

TArray<int32> UBGUFuncLibProjectile::CheckBuffDispUsedInBullet() {
    return TArray<int32>();
}

bool UBGUFuncLibProjectile::ProjectileAssetCheck_Full(FString& ErrorLog, TArray<FString>& MarkDirtyList) {
    return false;
}

bool UBGUFuncLibProjectile::ProjectileAssetCheck_Single(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, FString& ErrorLog, bool bNeedLoadData) {
    return false;
}

bool UBGUFuncLibProjectile::CreateCheckCompForProjectile(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, ProjectileCheckShapeType CheckShape, FString& ErrorLog, bool bNeedLoadData) {
    return false;
}

bool UBGUFuncLibProjectile::ModifyProjectileCheckShapeType(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, ProjectileCheckShapeType CheckShape, FString& ErrorLog) {
    return false;
}

FString UBGUFuncLibProjectile::CheckEffectsUsedInBulletExpand() {
    return TEXT("");
}

bool UBGUFuncLibProjectile::CreateInteractCompForProjectile(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, FString& ErrorLog) {
    return false;
}

void UBGUFuncLibProjectile::ProjectileAssetMoveCompToBP_Full(FString& ErrorLog) {
}

void UBGUFuncLibProjectile::ProjectileAssetMoveCompToBP_Single(ABGUProjectileBaseActor* ProjectileBaseActor_CDO, UBlueprint* BP, FString& ErrorLog, bool bNeedLoadData) {
}

void UBGUFuncLibProjectile::GetAllProjectileBPPathFromDesc_with_C(TArray<FString>& CurrentUsedBPPath) {
}

void UBGUFuncLibProjectile::GetAllProjectileBPPathFromDesc_without_C(TArray<FString>& CurrentUsedBPPath) {
}


