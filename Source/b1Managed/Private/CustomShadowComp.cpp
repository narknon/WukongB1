#include "CustomShadowComp.h"

UCustomShadowComp::UCustomShadowComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MPC_CustomShadow = NULL;
    this->Player_Actor = NULL;
    this->RerenderSpeed = 0.00f;
    this->OrthoWidth = 0.00f;
    this->SceneCapture_Actor = NULL;
    this->Light_Actor = NULL;
    this->SceneCapture_Comp = NULL;
    this->LandscapeProxy = NULL;
}

void UCustomShadowComp::Init() {
}

void UCustomShadowComp::Tick() {
}

void UCustomShadowComp::BeginPlayInCS_Implementation() {
}

void UCustomShadowComp::TickComponentInCS_Implementation(float DeltaTime) {
}


