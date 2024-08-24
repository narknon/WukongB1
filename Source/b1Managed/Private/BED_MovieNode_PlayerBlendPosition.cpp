#include "BED_MovieNode_PlayerBlendPosition.h"

UBED_MovieNode_PlayerBlendPosition::UBED_MovieNode_PlayerBlendPosition() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BlendMaxTime = 0.00f;
    this->BlendPositionAcceptRadius = 0.00f;
    this->MoveSpeedType = EAIMoveSpeedType::JOG;
    this->BlendPositionInterpTime = 0.00f;
    this->TeleportDistance = 0.00f;
}


