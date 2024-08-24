#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGBadOutputsNodeSettings.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NotPlaceable)
class UPCGBadOutputsNodeSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPCGBadOutputsNodeSettings();

};

