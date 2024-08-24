#pragma once
#include "CoreMinimal.h"
#include "EAkCollisionChannel.generated.h"

UENUM(BlueprintType)
enum EAkCollisionChannel {
    EAKCC_WorldStatic,
    EAKCC_WorldDynamic,
    EAKCC_Pawn,
    EAKCC_Visibility,
    EAKCC_Camera,
    EAKCC_PhysicsBody,
    EAKCC_Vehicle,
    EAKCC_Destructible,
    EAKCC_UseIntegrationSettingsDefault,
};

