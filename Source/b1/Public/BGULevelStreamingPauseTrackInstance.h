#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/TrackInstance/MovieSceneTrackInstance.h"
#include "BGULevelStreamingPauseTrackInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBGULevelStreamingPauseTrackInstance : public UMovieSceneTrackInstance {
    GENERATED_BODY()
public:
    UBGULevelStreamingPauseTrackInstance();

};

