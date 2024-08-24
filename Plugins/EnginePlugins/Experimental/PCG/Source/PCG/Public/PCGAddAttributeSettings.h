#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGCreateAttributeBaseSettings.h"
#include "PCGAddAttributeSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAddAttributeSettings : public UPCGCreateAttributeBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector OutputTarget;
    
    UPCGAddAttributeSettings();

};

