#include "BSNS_ShowSpecialUIV2.h"

UBSNS_ShowSpecialUIV2::UBSNS_ShowSpecialUIV2() {
    this->UIPageID = EUIPageType::None;
    this->DialogueID = 0;
    this->NameID = 0;
    this->MediaId = 0;
    this->OpenEndingCredits = EndingCreditsAction::Open;
}

void UBSNS_ShowSpecialUIV2::OnNotifyEnd_Implementation(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards) {
}

void UBSNS_ShowSpecialUIV2::OnNotifyBegin_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

FString UBSNS_ShowSpecialUIV2::GetDisplayName_Implementation() {
    return TEXT("");
}


