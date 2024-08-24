#include "SpiderNavPoint.h"
#include "Components/SphereComponent.h"

ASpiderNavPoint::ASpiderNavPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
    this->CollisionComp = (USphereComponent*)RootComponent;
}


