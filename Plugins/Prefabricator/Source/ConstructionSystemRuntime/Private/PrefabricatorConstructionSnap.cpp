#include "PrefabricatorConstructionSnap.h"
#include "PrefabricatorConstructionSnapComponent.h"

APrefabricatorConstructionSnap::APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<UPrefabricatorConstructionSnapComponent>(TEXT("SnapComponent"));
    this->ConstructionSnapComponent = (UPrefabricatorConstructionSnapComponent*)RootComponent;
}


