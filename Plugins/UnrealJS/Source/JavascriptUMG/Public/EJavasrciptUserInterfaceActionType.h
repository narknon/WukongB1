#pragma once
#include "CoreMinimal.h"
#include "EJavasrciptUserInterfaceActionType.generated.h"

UENUM(BlueprintType)
namespace EJavasrciptUserInterfaceActionType {
    enum Type {
        None,
        Button,
        ToggleButton,
        RadioButton,
        Check,
        CollapsedButton,
    };
}

