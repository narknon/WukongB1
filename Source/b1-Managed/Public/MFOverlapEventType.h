#pragma once
#include "CoreMinimal.h"
#include "MFOverlapEventType.generated.h"

UENUM(BlueprintType)
enum class MFOverlapEventType : uint8 {
    AddBuff,
    RemoveBuffWithTriggerRemove,
    RemoveBuffWithoutTriggerRemove,
    TriggerSkillEffect,
    DrawSign,
    AddAvoidance,
    RemoveAvoidance,
    DestroyProjectileByFlag,
    SetMastersTarget,
};

