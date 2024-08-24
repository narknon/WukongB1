#include "MovieSceneCalliopeTrack.h"

UMovieSceneCalliopeTrack::UMovieSceneCalliopeTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
}


