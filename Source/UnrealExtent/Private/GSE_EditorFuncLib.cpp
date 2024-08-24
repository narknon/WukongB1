#include "GSE_EditorFuncLib.h"

UGSE_EditorFuncLib::UGSE_EditorFuncLib() {
}

void UGSE_EditorFuncLib::SetActorLevelBoundsRelevant(AActor* InActor, bool bRelevant) {
}

void UGSE_EditorFuncLib::SetActorEditorOnly(AActor* Actor, bool NewEnable) {
}

bool UGSE_EditorFuncLib::IsClassPlaceable(UClass* AssetClass) {
    return false;
}

void UGSE_EditorFuncLib::ImportCSVToStringTable(FName TableId, const FString& CSVPath) {
}

TArray<APostProcessVolume*> UGSE_EditorFuncLib::GetValidPostProcessVolumes(UWorld* InWorld) {
    return TArray<APostProcessVolume*>();
}

UAssetDataArray* UGSE_EditorFuncLib::GetContentBrowserSelections() {
    return NULL;
}

TArray<UActorComponent*> UGSE_EditorFuncLib::GetCDONodeComponents(AActor* CDO) {
    return TArray<UActorComponent*>();
}

FBoxSphereBounds UGSE_EditorFuncLib::GetBrushBounds(UBrushComponent* BrushCom) {
    return FBoxSphereBounds{};
}

void UGSE_EditorFuncLib::GatherText() {
}

FString UGSE_EditorFuncLib::FAssetData_GetTagValue(UAssetDataArray* AssetData, const FName& TagName) {
    return TEXT("");
}

UClass* UGSE_EditorFuncLib::FAssetData_GetClass(UAssetDataArray* AssetData) {
    return NULL;
}

UObject* UGSE_EditorFuncLib::FAssetData_GetAsset(UAssetDataArray* AssetData) {
    return NULL;
}

void UGSE_EditorFuncLib::CompileText() {
}

void UGSE_EditorFuncLib::CheckActorBoundsInfo(AActor* InActor, bool bIncludeNonCollision, bool& OutActorLevelBoundsRelevant, FBox& OutActorBounds) {
}

void UGSE_EditorFuncLib::BGULandscapeCameraCollsion(UObject* WorldContextObject, int32 SurfaceType, float CellSize, float MaxHeightOffset, float MaxDisplacement, float CameraCollisionOffset) {
}

UStaticMeshComponent* UGSE_EditorFuncLib::BGUGetStaticMeshComp(AActor* Actor) {
    return NULL;
}

UObject* UGSE_EditorFuncLib::AssetPath_GetCDO(UObject* Outer, const FString& Path, UBlueprint*& Blueprint) {
    return NULL;
}


