#include "BUS_MovementSystem.h"

UBUS_MovementSystem::UBUS_MovementSystem() {
    this->PlayerCameraManager = NULL;
    this->CppCharacterMovementComp = NULL;
    this->CrowdFollowComp = NULL;
}

void UBUS_MovementSystem::OnAIPathMoveModeMoveComplete(int32 MoveRequestID, EPathFollowingResult::Type Result) {
}

void UBUS_MovementSystem::AIFlyPathMoveMode_Pathfinding_OnFinish(FDoNNavigationQueryData Data) {
}

void UBUS_MovementSystem::AIFlyPathMoveMode_Pathfinding_OnDynamicCollisionAlert(FDonNavigationDynamicCollisionPayload Data) {
}


