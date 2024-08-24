#include "SFadeObjectsComponent.h"

USFadeObjectsComponent::USFadeObjectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->currentFade = 0.00f;
    this->fadeNowID = 0;
    this->fadeMaterial = NULL;
    this->bEnable = true;
    this->addObjectInterval = 0.10f;
    this->calcFadeInterval = 0.05f;
    this->workDistance = 5000.00f;
    this->nearCameraRadius = 300.00f;
    this->playerClass = NULL;
    this->ObjectTypes.AddDefaulted(1);
    this->ChannelType = ECC_WorldStatic;
    this->FadeRate = 10.00f;
    this->CapsuleHalfHeight = 88.00f;
    this->capsuleRadius = 34.00f;
    this->nearObjectFade = 0.30f;
    this->farObjectFade = 0.10f;
    this->immediatelyFade = 0.50f;
}


