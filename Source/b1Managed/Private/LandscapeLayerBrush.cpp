#include "LandscapeLayerBrush.h"

ULandscapeLayerBrush::ULandscapeLayerBrush() {
    this->BrushManager = NULL;
    this->TickBPBrush = false;
    this->UpdateInterval = 0.00f;
}

UTextureRenderTarget2D* ULandscapeLayerBrush::Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName InWeightmapLayerName) {
    return NULL;
}

void ULandscapeLayerBrush::Initialize_Implementation(FTransform InLandscapeTransform, FIntPoint InLandscapeSize, FIntPoint InLandscapeRenderTargetSize) {
}

void ULandscapeLayerBrush::ReceiveTick_Implementation(float DeltaSeconds) {
}


