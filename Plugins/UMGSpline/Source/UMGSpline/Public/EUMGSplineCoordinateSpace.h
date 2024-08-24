#pragma once
#include "CoreMinimal.h"
#include "EUMGSplineCoordinateSpace.generated.h"

UENUM(BlueprintType)
namespace EUMGSplineCoordinateSpace {
    enum Type {
        Local,
        Viewport,
        Screen,
    };
}

