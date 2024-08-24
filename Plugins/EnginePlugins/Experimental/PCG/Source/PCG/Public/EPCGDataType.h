#pragma once
#include "CoreMinimal.h"
#include "EPCGDataType.generated.h"

UENUM()
enum class EPCGDataType : uint32 {
    None,
    Point = 2,
    Spline = 4,
    LandscapeSpline = 8,
    PolyLine = 12,
    Landscape = 16,
    Texture = 32,
    RenderTarget = 64,
    BaseTexture = 96,
    Surface = 112,
    Volume = 128,
    Primitive = 256,
    Concrete = 510,
    Composite = 512,
    Spatial = 1022,
    Param = 134217728,
    Settings = 268435456,
    Other = 536870912,
    Any = 1073741823,
};

