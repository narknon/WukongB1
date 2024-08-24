#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/IMovieSceneEntityProvider.h"
#include "MovieSceneSection.h"
#include "BGULevelStreamingPauseSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBGULevelStreamingPauseSection : public UMovieSceneSection/*, public IMovieSceneEntityProvider*/ {
    GENERATED_BODY()
public:
    UBGULevelStreamingPauseSection();


    // Fix for true pure virtual functions not being implemented
};

