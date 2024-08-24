#include "LandscapeRoadBrush.h"

ULandscapeRoadBrush::ULandscapeRoadBrush() {
    this->BrushManager = NULL;
    this->ParentHeightmapMat = NULL;
    this->HeightmapMID = NULL;
    this->BaseLayerWeightMat = NULL;
    this->ALayerWeightMat = NULL;
    this->BLayerWeightMat = NULL;
    this->WeightmapMID = NULL;
    this->UpdateInterval = 0.00f;
}

UTextureRenderTarget2D* ULandscapeRoadBrush::Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName InWeightmapLayerName) {
    return NULL;
}

void ULandscapeRoadBrush::Initialize_Implementation(FTransform InLandscapeTransform, FIntPoint InLandscapeSize, FIntPoint InLandscapeRenderTargetSize) {
}

void ULandscapeRoadBrush::ReceiveTick_Implementation(float DeltaSeconds) {
}


