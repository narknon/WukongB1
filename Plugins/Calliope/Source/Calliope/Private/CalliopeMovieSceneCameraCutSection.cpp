#include "CalliopeMovieSceneCameraCutSection.h"

UCalliopeMovieSceneCameraCutSection::UCalliopeMovieSceneCameraCutSection() {
    this->bLockPreviousCamera = false;
    this->bHasInitialCameraCutTransform = false;
}

void UCalliopeMovieSceneCameraCutSection::SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID) {
}

FMovieSceneObjectBindingID UCalliopeMovieSceneCameraCutSection::GetCameraBindingID() const {
    return FMovieSceneObjectBindingID{};
}


