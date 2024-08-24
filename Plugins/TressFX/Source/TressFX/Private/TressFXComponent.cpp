#include "TressFXComponent.h"

UTressFXComponent::UTressFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->CastShadow = true;
    this->bCastShadowAsTwoSided = true;
    this->EnableRuntimeBounds = false;
    this->EnableSimulation = true;
    this->EnableCapsuleCollision = true;
    this->HairPhysicsAsset = NULL;
    this->Asset = NULL;
    this->HairMaterial = NULL;
    this->HairMaterialLowQuality = NULL;
    this->LodScreenSize = 2.50f;
    this->MorphTargetBindingAsset = NULL;
    this->LocalSDFIdRef = 4294967295;
    this->bGenerateCardMesh = true;
    this->IsInGamePlay = false;
    this->SimulationDelayTime = 1.00f;
    this->SimulationDelayRemain = 0.00f;
    this->InitedBounds = false;
}

void UTressFXComponent::ResetPositions() {
}


