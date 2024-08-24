#pragma once
#include "CoreMinimal.h"
#include "FeatureInputType.generated.h"

UENUM(BlueprintType)
enum class FeatureInputType : uint8 {
    NoInput,
    FeatureOutput,
    AllCharacters,
    OwnCharacter,
    CenterCharacter,
};

