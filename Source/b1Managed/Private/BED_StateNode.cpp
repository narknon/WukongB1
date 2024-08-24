#include "BED_StateNode.h"
#include "ECalliopeNodeStyle.h"

UBED_StateNode::UBED_StateNode() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("General");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_StateNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


