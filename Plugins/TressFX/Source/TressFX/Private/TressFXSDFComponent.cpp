#include "TressFXSDFComponent.h"

UTressFXSDFComponent::UTressFXSDFComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableSDF = true;
    this->LocalSDFId = 4294967295;
    this->TressFXMeshAsset = NULL;
    this->HasBlendShapes = false;
}

void UTressFXSDFComponent::SetTressFXMeshAsset(UTressFXMeshAsset* Asset) {
}


