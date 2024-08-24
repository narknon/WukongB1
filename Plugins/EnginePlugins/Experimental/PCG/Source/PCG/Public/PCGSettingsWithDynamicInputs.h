#pragma once
#include "CoreMinimal.h"
#include "PCGPinProperties.h"
#include "PCGSettings.h"
#include "PCGSettingsWithDynamicInputs.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGSettingsWithDynamicInputs : public UPCGSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> DynamicInputPinProperties;
    
public:
    UPCGSettingsWithDynamicInputs();

};

