#pragma once
#include "CoreMinimal.h"
#include "ESubChannelType.generated.h"

UENUM(BlueprintType)
enum ESubChannelType {
    Channel_Diffuse,
    Channel_Ambient,
    Channel_BaseColor,
    Channel_Metallic,
    Channel_Roughness,
    Channel_Emissive,
    Channel_Normal,
    Channel_Mask,
    Channel_Opacity,
    Channel_Refraction,
    Channel_AmbientOcclusion,
    Channel_Glossiness,
    Channel_Height,
    Channel_Displacement,
    Channel_Reflection,
    Channel_Invalid,
};

