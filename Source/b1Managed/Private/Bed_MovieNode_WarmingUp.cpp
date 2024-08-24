#include "Bed_MovieNode_WarmingUp.h"

UBed_MovieNode_WarmingUp::UBed_MovieNode_WarmingUp() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bUseMarkFrameLoop = true;
    this->bUseCinematicCamera = false;
    this->CameraBlendInTime = 1.00f;
    this->CameraBlendInFunction = VTBlend_EaseInOut;
    this->CameraBlendInFuncExp = 1.50f;
    this->AssociationUnitInfoConfigId = 0;
    this->AssociationUnitSpawnInfoSpawnType = AssociationUnitSpawnType::BySceneItem;
    this->bUseAsyncLoad = false;
}


