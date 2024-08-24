#pragma once
#include "CoreMinimal.h"
#include "EJavascriptAutoCenter.generated.h"

UENUM(BlueprintType)
enum class EJavascriptAutoCenter : uint8 {
    None,
    PrimaryWorkArea,
    PreferredWorkArea,
};

