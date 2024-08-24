#pragma once
#include "CoreMinimal.h"
#include "EAnimToTextureMode.generated.h"

UENUM(BlueprintType)
enum class EAnimToTextureMode : uint8 {
    Vertex,
    Bone,
};

