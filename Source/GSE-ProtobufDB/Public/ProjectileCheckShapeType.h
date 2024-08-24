#pragma once
#include "CoreMinimal.h"
#include "ProjectileCheckShapeType.generated.h"

UENUM(BlueprintType)
enum class ProjectileCheckShapeType : uint8 {
    DefaultShape,
    BoxShape,
    SphereShape,
    CapsuleShape,
    SceneItem,
    CustomShape,
    LineTrace,
};

