#include "AnimNotify_GSPlayCameraSequence.h"

UAnimNotify_GSPlayCameraSequence::UAnimNotify_GSPlayCameraSequence() {
    this->LevelSequenceForCamera = NULL;
    this->bWithCameraFilterPitchMin = false;
    this->PlayerFollowCameraPitchMin = 0.00f;
    this->bWithCameraFilterPitchMax = false;
    this->PlayerFollowCameraPitchMax = 0.00f;
    this->bWithCameraFilterYawMin = false;
    this->PlayerFollowCameraYawMin = 0.00f;
    this->bWithCameraFilterYawMax = false;
    this->PlayerFollowCameraYawMax = 0.00f;
}


