#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/TrackInstance/MovieSceneTrackInstance.h"
#include "CalliopeMovieSceneCameraCutTrackInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCalliopeMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance {
    GENERATED_BODY()
public:
    UCalliopeMovieSceneCameraCutTrackInstance();

};

