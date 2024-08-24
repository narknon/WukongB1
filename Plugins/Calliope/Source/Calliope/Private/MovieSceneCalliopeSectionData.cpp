#include "MovieSceneCalliopeSectionData.h"

UMovieSceneCalliopeSectionData::UMovieSceneCalliopeSectionData() {
    this->bValid = false;
    this->bIsPreview = false;
}

bool UMovieSceneCalliopeSectionData::IsSilent() const {
    return false;
}

bool UMovieSceneCalliopeSectionData::IsOperandValid() const {
    return false;
}

bool UMovieSceneCalliopeSectionData::IsForwardPlay() const {
    return false;
}

bool UMovieSceneCalliopeSectionData::HasJumped() const {
    return false;
}

float UMovieSceneCalliopeSectionData::GetTimeInSeconds() const {
    return 0.0f;
}

TEnumAsByte<EMovieScenePlayerStatus::Type> UMovieSceneCalliopeSectionData::GetStatus() const {
    return EMovieScenePlayerStatus::Stopped;
}

int32 UMovieSceneCalliopeSectionData::GetSequenceID() const {
    return 0;
}

UObject* UMovieSceneCalliopeSectionData::GetPlaybackContext() {
    return NULL;
}

FCalliopeGuid UMovieSceneCalliopeSectionData::GetObjectBindingID() const {
    return FCalliopeGuid{};
}

UCalliopeLevelSequencePlayer* UMovieSceneCalliopeSectionData::GetCalliopePlayer() {
    return NULL;
}


