#include "GSEArteriesActor.h"
#include "GSEArteriesBoxComponent.h"
#include "GSEArteriesSplineComponent.h"

AGSEArteriesActor::AGSEArteriesActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableCollision = true;
    this->MobilityMode = EComponentMobility::Static;
    this->InteractType = GSArteriesIteractType::Spline;
    this->GSEArteriesSplineComp = CreateDefaultSubobject<UGSEArteriesSplineComponent>(TEXT("GSEArteriesSplineComponent"));
    this->GSEArteriesBoxComp = CreateDefaultSubobject<UGSEArteriesBoxComponent>(TEXT("GSEArteriesBoxComponent"));
    this->GSEArteriesBoxComp->SetupAttachment(RootComponent);
    this->GSEArteriesSplineComp->SetupAttachment(RootComponent);
}

void AGSEArteriesActor::UpdateMobility() {
}

void AGSEArteriesActor::UpdateInteractComp() {
}

void AGSEArteriesActor::UpdateHISMCollision() {
}

void AGSEArteriesActor::SetSplineUnitLength(float Length) {
}

bool AGSEArteriesActor::CloseSplineAndBuild(float CloseDistance) {
    return false;
}


