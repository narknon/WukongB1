#include "BED_GuideAsset.h"

UBED_GuideAsset::UBED_GuideAsset() {
}

ECalliopeViewType UBED_GuideAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_GuideAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_GuideAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}


