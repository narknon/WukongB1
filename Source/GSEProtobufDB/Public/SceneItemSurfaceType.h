#pragma once
#include "CoreMinimal.h"
#include "SceneItemSurfaceType.generated.h"

UENUM(BlueprintType)
enum class SceneItemSurfaceType : uint8 {
    DefaultSurface,
    GrassSurface,
    WaterSurface,
    CloudSurface,
    StoneSurface,
    MudSurface,
    SoilSurface,
    WoodSurface,
    HfmsoftSandSurface,
    GlideSandSurface,
    SnowSurface,
    IceSurface,
    LavaSurface,
    YinSurface,
    YangSurface,
    BloodSurface,
    GlideSnow,
    GlideIce,
    BajieMud,
    CricketBody,
    EnumMax,
};

