#include "SpiderNavGridBuilder.h"
#include "Components/BoxComponent.h"
#include "SpiderNavGridTracer.h"
#include "SpiderNavPoint.h"
#include "SpiderNavPointEdge.h"

ASpiderNavGridBuilder::ASpiderNavGridBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBox"));
    this->VolumeBox = (UBoxComponent*)RootComponent;
    this->TracerActorBP = ASpiderNavGridTracer::StaticClass();
    this->NavPointActorBP = ASpiderNavPoint::StaticClass();
    this->NavPointEdgeActorBP = ASpiderNavPointEdge::StaticClass();
    this->GridStepSize = 100.00f;
    this->bUseActorWhiteList = false;
    this->bUseActorBlackList = false;
    this->bAutoRemoveTracers = true;
    this->bAutoSaveGrid = true;
    this->BounceNavDistance = 3.00f;
    this->TraceDistanceModificator = 1.50f;
    this->ClosePointsFilterModificator = 0.10f;
    this->ConnectionSphereRadiusModificator = 1.50f;
    this->TraceDistanceForEdgesModificator = 1.90f;
    this->EgdeDeviationModificator = 0.15f;
    this->bSingleDirectionTrace = false;
}

void ASpiderNavGridBuilder::SaveGrid() {
}

void ASpiderNavGridBuilder::DrawDebugRelations() {
}

int32 ASpiderNavGridBuilder::BuildGrid() {
    return 0;
}


