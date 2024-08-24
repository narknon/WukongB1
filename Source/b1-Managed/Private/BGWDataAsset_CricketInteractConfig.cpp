#include "BGWDataAsset_CricketInteractConfig.h"

UBGWDataAsset_CricketInteractConfig::UBGWDataAsset_CricketInteractConfig() {
    this->CameraBlendInTime = 0.00f;
    this->CameraBlendOutTime = 0.00f;
    this->FallDownCameraBlendOutTime = 0.00f;
    this->AMCricketPrepareInteract = NULL;
    this->AMPlayerPrepareInteract = NULL;
    this->AnimDummyMeshPrepareInteract = NULL;
    this->AMPlayerFinishInteract = NULL;
    this->AnimDummyMeshFinishInteract = NULL;
    this->AMPlayerFallDown = NULL;
    this->AMCricketPrepareInteractLoop = NULL;
    this->AMPlayerPrepareInteractLoop = NULL;
    this->AnimDummyMeshPrepareInteractLoop = NULL;
    this->AMCricketPrepareInteractBreak = NULL;
    this->AMPlayerPrepareInteractBreak = NULL;
    this->InteractFailCameraSequenceID = 0;
    this->AMCricketInteractFail = NULL;
}


