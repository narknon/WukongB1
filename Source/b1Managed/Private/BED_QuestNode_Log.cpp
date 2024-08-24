#include "BED_QuestNode_Log.h"

UBED_QuestNode_Log::UBED_QuestNode_Log() {
    this->Category = TEXT("Utils");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Message = TEXT("Log!");
    this->bPrintToScreen = true;
    this->Duration = 5.00f;
}

bool UBED_QuestNode_Log::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_QuestNode_Log::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


