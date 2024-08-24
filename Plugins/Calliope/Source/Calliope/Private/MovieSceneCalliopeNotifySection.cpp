#include "MovieSceneCalliopeNotifySection.h"

UMovieSceneCalliopeNotifySection::UMovieSceneCalliopeNotifySection() {
}

void UMovieSceneCalliopeNotifySection::OnPreviewNotify_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}

void UMovieSceneCalliopeNotifySection::OnNotify_Implementation(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards) {
}

float UMovieSceneCalliopeNotifySection::GetDurationTime_Implementation() {
    return 0.0f;
}


