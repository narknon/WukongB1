#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputNoSourceSelector.h"
#include "PCGCreateAttributeBaseSettings.h"
#include "PCGCreateAttributeSetSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGCreateAttributeSetSettings : public UPCGCreateAttributeBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputNoSourceSelector OutputTarget;
    
    UPCGCreateAttributeSetSettings();

};

