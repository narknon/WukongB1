#include "BED_BehaviorNode_AiConversation.h"

UBED_BehaviorNode_AiConversation::UBED_BehaviorNode_AiConversation() {
    this->InputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_AiConversation::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

void UBED_BehaviorNode_AiConversation::OnRefreshAssetInCS_Implementation() const {
}

FString UBED_BehaviorNode_AiConversation::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


