#include "FluidHeightmapFogComponent.h"

UFluidHeightmapFogComponent::UFluidHeightmapFogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RT_TopHeightmap = NULL;
    this->RT_BottomHeightmap = NULL;
    this->MID_BaseHeightmap = NULL;
    this->MID_PSFogOutput = NULL;
    this->PS_FogOutput = NULL;
    this->BB_Heightmap = NULL;
    this->DebuggerActor = NULL;
    this->BoundingSize = 0;
}

void UFluidHeightmapFogComponent::InitComp() {
}

void UFluidHeightmapFogComponent::RenderHeightmap() {
}


