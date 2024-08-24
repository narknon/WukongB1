#include "BGUChapterSurpriseActor.h"
#include "Components/SceneComponent.h"
#include "BGUDebugCircleComponent.h"

ABGUChapterSurpriseActor::ABGUChapterSurpriseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComp"));
    this->DefaultRootComp = (USceneComponent*)RootComponent;
    this->ActiveDebugComp = CreateDefaultSubobject<UBGUDebugCircleComponent>(TEXT("ActiveDebugComp"));
    this->InteractDebugComp = CreateDefaultSubobject<UBGUDebugCircleComponent>(TEXT("InteractDebugComp"));
    this->SurpriseID = 0;
    this->CameraBlendTime = 2.00f;
    this->CameraBlendFunction = EEasingFunc::EaseOut;
    this->CameraBlendExp = 2.00f;
    this->AudioEvent = NULL;
    this->ActiveDebugComp->SetupAttachment(RootComponent);
    this->InteractDebugComp->SetupAttachment(RootComponent);
}

void ABGUChapterSurpriseActor::OnConstructionCS() {
}

void ABGUChapterSurpriseActor::ReceiveTick_Implementation(float DeltaSeconds) {
}


