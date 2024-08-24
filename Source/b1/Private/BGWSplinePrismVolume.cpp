#include "BGWSplinePrismVolume.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"

ABGWSplinePrismVolume::ABGWSplinePrismVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineForPrism"));
    this->MidPoint = CreateDefaultSubobject<USphereComponent>(TEXT("PrismMidPoint"));
    this->Height = 3000.00f;
    this->bDesc1 = false;
    this->bDesc2 = false;
    this->bDesc3 = false;
    this->MidPoint->SetupAttachment(RootComponent);
    this->Spline->SetupAttachment(RootComponent);
}

bool ABGWSplinePrismVolume::K2_EncompassesPoint(const FVector& InPoint, float& OutDistanceToPoint, float SphereRadius) const {
    return false;
}


