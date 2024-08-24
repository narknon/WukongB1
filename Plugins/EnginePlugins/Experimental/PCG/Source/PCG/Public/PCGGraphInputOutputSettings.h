#pragma once
#include "CoreMinimal.h"
#include "PCGPinProperties.h"
#include "PCGSettings.h"
#include "PCGGraphInputOutputSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGGraphInputOutputSettings : public UPCGSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> PinLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> CustomPins;
    
public:
    UPCGGraphInputOutputSettings();

};

