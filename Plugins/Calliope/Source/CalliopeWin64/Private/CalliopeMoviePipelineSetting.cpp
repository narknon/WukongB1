#include "CalliopeMoviePipelineSetting.h"

UCalliopeMoviePipelineSetting::UCalliopeMoviePipelineSetting() {
}



void UCalliopeMoviePipelineSetting::SequenceBindActorsByTag(UMoviePipeline* InPipeline, const TMap<FName, AActor*>& TagActors) {
}

bool UCalliopeMoviePipelineSetting::IgnoreTransientFiltersCS_Implementation() const {
    return false;
}

int32 UCalliopeMoviePipelineSetting::GetSequenceBindingTags(UMoviePipeline* InPipeline, TSet<FName>& OutBindingTags) const {
    return 0;
}



