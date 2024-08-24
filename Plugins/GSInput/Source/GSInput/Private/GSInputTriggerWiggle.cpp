#include "GSInputTriggerWiggle.h"

UGSInputTriggerWiggle::UGSInputTriggerWiggle() {
    this->AreaCount = 4;
    this->IntervalAreaDistance = 1;
    this->InnerRadius = 0.50f;
    this->EffectiveCrossDuration = 0.20f;
}


ETriggerState UGSInputTriggerWiggle::UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime)
{
    ETriggerState State = ETriggerState::None;

    return State;
}