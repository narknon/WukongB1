#include "CLSSplinePrismVolume.h"
#include "Components/SplineComponent.h"

ACLSSplinePrismVolume::ACLSSplinePrismVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bColored = true;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineForPrism"));
    this->Height = 3000.00f;
    this->Spline->SetupAttachment(RootComponent);
}


