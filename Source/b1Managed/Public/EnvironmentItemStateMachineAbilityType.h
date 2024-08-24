#pragma once
#include "CoreMinimal.h"
#include "EnvironmentItemStateMachineAbilityType.generated.h"

UENUM(BlueprintType)
enum class EnvironmentItemStateMachineAbilityType : uint8 {
    Default,
    PlayDialogue = 2,
};

