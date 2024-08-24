#include "MovieSceneCalliopeNormalSection.h"

UMovieSceneCalliopeNormalSection::UMovieSceneCalliopeNormalSection() {
}

void UMovieSceneCalliopeNormalSection::SectionBeingDestroyed_Implementation(UMovieSceneCalliopeSectionData* InSectionData) const {
}

UMovieSceneCalliopeSectionData* UMovieSceneCalliopeNormalSection::MakeSectionData_Implementation() const {
    return NULL;
}

float UMovieSceneCalliopeNormalSection::GetStartTime() const {
    return 0.0f;
}

float UMovieSceneCalliopeNormalSection::GetMovieMaxDuration() const {
    return 0.0f;
}

float UMovieSceneCalliopeNormalSection::GetEndTime() const {
    return 0.0f;
}

float UMovieSceneCalliopeNormalSection::GetDurationTime_Implementation() {
    return 0.0f;
}

void UMovieSceneCalliopeNormalSection::Evaluate_Implementation(UMovieSceneCalliopeSectionData* InSectionData) {
}


