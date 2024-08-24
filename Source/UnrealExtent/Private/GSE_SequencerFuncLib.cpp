#include "GSE_SequencerFuncLib.h"

UGSE_SequencerFuncLib::UGSE_SequencerFuncLib() {
}

bool UGSE_SequencerFuncLib::SequenceSetClockSource(UMovieSceneSequencePlayer* SequencePlayer, EUpdateClockSource ClockSource) {
    return false;
}

int32 UGSE_SequencerFuncLib::SequenceMasterAutoBind(ALevelSequenceActor* SequenceActor, AActor* MasterActor) {
    return 0;
}

bool UGSE_SequencerFuncLib::SequenceActorSetBindingByName(ALevelSequenceActor* SequenceActor, const FName& TargetName, const TArray<AActor*>& Actors, bool bUseDisplayName) {
    return false;
}

void UGSE_SequencerFuncLib::SequenceActorInitPlayerCS(ALevelSequenceActor* SeqActor, ULevel* Lvl, ULevelSequence* LevelSeq) {
}

void UGSE_SequencerFuncLib::SequenceActorAddBindingCS(ALevelSequenceActor* SeqActor, const FSequenceBindingIDInCS& BindingID, AActor* Actor) {
}

void UGSE_SequencerFuncLib::LevelSequenceUnbindPossessableObjectCS(ULevelSequence* LevelSequence, const FSequenceBindingIDInCS& BindingID) {
}

void UGSE_SequencerFuncLib::LevelSequenceBindPossessableObjectCS(ULevelSequence* LevelSequence, const FSequenceBindingIDInCS& BindingID, UObject* BindObj, UObject* Ctx) {
}

bool UGSE_SequencerFuncLib::IsMovieSceneObjectBindingIDValidCS(const FSequenceBindingIDInCS& BindID) {
    return false;
}

FSequenceBindingIDInCS UGSE_SequencerFuncLib::GetLevelSequenceBindingIDByNameCS(ULevelSequence* LevelSequence, const FName& TargetName) {
    return FSequenceBindingIDInCS{};
}

FMovieSceneObjectBindingID UGSE_SequencerFuncLib::GetLevelSequenceBindingIDByName(ULevelSequence* LevelSequence, const FName& TargetName) {
    return FMovieSceneObjectBindingID{};
}

FMovieSceneObjectBindingID UGSE_SequencerFuncLib::GetLevelSequenceBindingIDByDisplayName(ULevelSequence* LevelSequence, const FName& TargetName) {
    return FMovieSceneObjectBindingID{};
}

float UGSE_SequencerFuncLib::FQualifiedTimeAsSeconds(const FQualifiedFrameTime& FrameTime) {
    return 0.0f;
}


