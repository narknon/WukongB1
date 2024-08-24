#include "LandscapeBpBrushTest.h"

ULandscapeBpBrushTest::ULandscapeBpBrushTest() {
    this->BrushManager = NULL;
    this->ParentHeightmapMat = NULL;
    this->HeightmapMID = NULL;
    this->ParentWeightmapMat = NULL;
    this->WeightmapMID = NULL;
    this->NoiseOffset = 0.00f;
}

UTextureRenderTarget2D* ULandscapeBpBrushTest::Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName InWeightmapLayerName) {
    return NULL;
}

void ULandscapeBpBrushTest::Initialize_Implementation(FTransform InLandscapeTransform, FIntPoint InLandscapeSize, FIntPoint InLandscapeRenderTargetSize) {
}


