#include "CalliopeLevelSequencePlayer.h"

UCalliopeLevelSequencePlayer::UCalliopeLevelSequencePlayer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->MovieInstanceIndex = 0;
    this->SeqJumpError = 0.00f;
    this->EventReceiver = NULL;
}

bool UCalliopeLevelSequencePlayer::TryGetMarkedSecond(const FString& InFrameLabel, float& OutTimeSecond) const {
    return false;
}

bool UCalliopeLevelSequencePlayer::TryGetMarkedFrameTime(const FString& InFrameLabel, FFrameTime& OutFrameTime) const {
    return false;
}

void UCalliopeLevelSequencePlayer::StopLooping() {
}

void UCalliopeLevelSequencePlayer::SetEventReceiver(UObject* InEventReceiver) {
}

UObject* UCalliopeLevelSequencePlayer::GetPlaybackContext() const {
    return NULL;
}

void UCalliopeLevelSequencePlayer::FixSectionData(const UMovieScene* InMovieScene) {
}

UCalliopeLevelSequencePlayer* UCalliopeLevelSequencePlayer::CreateCalliopeLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, FLevelSequenceCameraSettings CameraSettings, ACalliopeLevelSequenceActor*& OutActor) {
    return NULL;
}


