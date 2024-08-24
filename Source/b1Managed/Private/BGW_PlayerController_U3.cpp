#include "BGW_PlayerController_U3.h"

ABGW_PlayerController_U3::ABGW_PlayerController_U3(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->InputHandler = NULL;
}

void ABGW_PlayerController_U3::OnAxisMoveForward(float AxisValue) {
}

void ABGW_PlayerController_U3::OnAxisMoveSideways(float AxisValue) {
}

void ABGW_PlayerController_U3::OnAxisMoveForwardGamepad(float AxisValue) {
}

void ABGW_PlayerController_U3::OnAxisMoveSidewaysGamepad(float AxisValue) {
}

void ABGW_PlayerController_U3::ProcessPlayerInputCS_Implementation(float DeltaTime, bool bGamePaused) {
}

void ABGW_PlayerController_U3::SetupInputComponentCS_Implementation() {
}


