#include "BST_PostAudioOnUnit.h"

UBST_PostAudioOnUnit::UBST_PostAudioOnUnit() {
    this->bTakePlayerAsUnit = false;
    this->AkEvent = NULL;
    this->bRetriggerEvent = false;
    this->ScrubTailLengthMs = 100;
    this->bStopAtSectionEnd = true;
    this->PostOnDummyObj = false;
}

void UBST_PostAudioOnUnit::SetEvent_Editor(UAkAudioEvent* Event) {
}

void UBST_PostAudioOnUnit::Evaluate_Implementation(UMovieSceneCalliopeSectionData* InSectionData) {
}

FString UBST_PostAudioOnUnit::GetDisplayName_Implementation() {
    return TEXT("");
}

float UBST_PostAudioOnUnit::GetDurationTime_Implementation() {
    return 0.0f;
}

UMovieSceneCalliopeSectionData* UBST_PostAudioOnUnit::MakeSectionData_Implementation() const {
    return NULL;
}

void UBST_PostAudioOnUnit::SectionBeingDestroyed_Implementation(UMovieSceneCalliopeSectionData* InSectionData) const {
}


