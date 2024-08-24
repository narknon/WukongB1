#include "BED_GuideNode_Base.h"

UBED_GuideNode_Base::UBED_GuideNode_Base() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_GuideNode_Base::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


