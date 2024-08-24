#include "PrefabricatorConstructionSnapComponent.h"

UPrefabricatorConstructionSnapComponent::UPrefabricatorConstructionSnapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnapType = EPrefabricatorConstructionSnapType::Floor;
    this->bAlignToGroundSlope = false;
    this->bUseMaxGroundSlopeConstraint = false;
    this->MaxGroundPlacementSlope = 60.00f;
}


