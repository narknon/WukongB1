#include "SpiderNavGridTracer.h"
#include "Components/SphereComponent.h"

ASpiderNavGridTracer::ASpiderNavGridTracer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
    this->CollisionComp = (USphereComponent*)RootComponent;
}


