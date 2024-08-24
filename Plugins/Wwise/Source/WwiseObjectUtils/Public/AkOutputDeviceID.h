#pragma once
#include "CoreMinimal.h"
#include "AkUInt64Wrapper.h"
#include "AkOutputDeviceID.generated.h"

USTRUCT(BlueprintType)
struct FAkOutputDeviceID : public FAkUInt64Wrapper {
    GENERATED_BODY()
public:
    WWISEOBJECTUTILS_API FAkOutputDeviceID();
};

