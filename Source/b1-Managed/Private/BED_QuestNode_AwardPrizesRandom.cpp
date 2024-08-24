#include "BED_QuestNode_AwardPrizesRandom.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_AwardPrizesRandom::UBED_QuestNode_AwardPrizesRandom() {
    this->Category = TEXT("Notifies");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->RandomCount = 0;
    this->SuccessLimit = 1;
    this->NormalProbability = 0;
    this->FirstProbability = 0;
    this->SecondProbability = 0;
    this->EventID = 0;
    this->RefreshDelta = 0;
    this->AwardCd = 0;
}

void UBED_QuestNode_AwardPrizesRandom::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_QuestNode_AwardPrizesRandom::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


