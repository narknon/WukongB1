#include "PCGVolume.h"
#include "PCGComponent.h"

APCGVolume::APCGVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PCGComponent = CreateDefaultSubobject<UPCGComponent>(TEXT("PCG Component"));
}


