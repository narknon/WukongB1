#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPCGExclusiveDataType.h"
#include "PCGPinProperties.h"
#include "PCGBlueprintPinHelpers.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGBlueprintPinHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bAdvancedPin, EPCGExclusiveDataType AllowedType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakPinProperty(const FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bAdvancedPin, EPCGExclusiveDataType& AllowedType);
    
};

