#pragma once
#include "CoreMinimal.h"
#include "EPCGExclusiveDataType.generated.h"

UENUM(BlueprintType)
enum class EPCGExclusiveDataType : uint8 {
    None,
    Point,
    Spline,
    LandscapeSpline,
    PolyLine,
    Landscape,
    Texture,
    RenderTarget,
    BaseTexture,
    Surface,
    Volume,
    Primitive,
    Concrete,
    Composite,
    Spatial,
    Param,
    Settings,
    Other,
    Any,
};

