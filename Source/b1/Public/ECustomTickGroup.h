#pragma once
#include "CoreMinimal.h"
#include "ECustomTickGroup.generated.h"

UENUM(BlueprintType)
enum ECustomTickGroup {
    ECustomTickGroup_None,
    PreAnimation = 101,
    BeforeStartPhsics = 111,
    BeforePostPhsics = 141,
    BeforePostUpdateWork = 151,
};

