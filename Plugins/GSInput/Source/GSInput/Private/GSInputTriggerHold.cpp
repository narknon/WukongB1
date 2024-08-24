#include "GSInputTriggerHold.h"

UGSInputTriggerHold::UGSInputTriggerHold() {
    this->HoldTimeThreshold = 1.00f;
}


ETriggerState UGSInputTriggerHold::UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime)
{
    // Update HeldDuration and derive base state
    ETriggerState State = ETriggerState::None;

    return State;
}