#include "BSNS_ShowSpecialUI.h"

UBSNS_ShowSpecialUI::UBSNS_ShowSpecialUI() {
    this->UIPageID = EUIPageID::MIN;
    this->DialogueID = 0;
    this->NameID = 0;
    this->ChapterID = 0;
    this->MediaId = 0;
}

void UBSNS_ShowSpecialUI::OnNotifyBegin_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

FString UBSNS_ShowSpecialUI::GetDisplayName_Implementation() {
    return TEXT("");
}


