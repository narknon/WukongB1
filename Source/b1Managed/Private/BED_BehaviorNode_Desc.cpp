#include "BED_BehaviorNode_Desc.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_Desc::UBED_BehaviorNode_Desc() {
    this->Category = TEXT("Unused");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


