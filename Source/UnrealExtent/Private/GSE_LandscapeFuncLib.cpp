#include "GSE_LandscapeFuncLib.h"

UGSE_LandscapeFuncLib::UGSE_LandscapeFuncLib() {
}

FVector UGSE_LandscapeFuncLib::SaveLandscapeWeight(const FString& PackagePath, AActor* LandscapeActor) {
    return FVector{};
}

UTexture2D* UGSE_LandscapeFuncLib::SaveLandscapeLayerWeightTex(const FString& PackagePath, const FString& AssetName, AActor* LandscapeActor, const FString& LayerName) {
    return NULL;
}

void UGSE_LandscapeFuncLib::RecreateLandscapeActorByProxy(AActor* LandscapeProxy) {
}

FVector UGSE_LandscapeFuncLib::GetLandscapeOriginOffset(AActor* LandscapeActor) {
    return FVector{};
}

void UGSE_LandscapeFuncLib::AddLocationsToStreamingManager(TArray<FVector> Locations, float Duration) {
}


