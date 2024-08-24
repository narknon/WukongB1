#pragma once
#include "CoreMinimal.h"
#include "ETressFXCollisionType.generated.h"

UENUM(BlueprintType)
enum ETressFXCollisionType {
    TFXCollsion_None,
    TFXCollsion_Capsule,
    TFXCollsion_PhysicsAsset,
    TFXCollsion_SDF,
};

