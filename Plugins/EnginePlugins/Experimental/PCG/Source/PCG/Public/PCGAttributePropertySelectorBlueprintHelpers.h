#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPCGAttributePropertySelection.h"
#include "EPCGExtraProperties.h"
#include "EPCGPointProperties.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertySelectorBlueprintHelpers.generated.h"

class UPCGData;

UCLASS(Blueprintable)
class PCG_API UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGAttributePropertySelectorBlueprintHelpers();

    UFUNCTION(BlueprintCallable)
    static bool SetPointProperty(UPARAM(Ref) FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty);
    
    UFUNCTION(BlueprintCallable)
    static bool SetExtraProperty(UPARAM(Ref) FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAttributeName(UPARAM(Ref) FPCGAttributePropertySelector& Selector, FName InAttributeName);
    
    UFUNCTION(BlueprintCallable)
    static EPCGAttributePropertySelection GetSelection(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static EPCGPointProperties GetPointProperty(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FName GetName(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static EPCGExtraProperties GetExtraProperty(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetExtraNames(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAttributeName(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FPCGAttributePropertyOutputSelector CopyAndFixSource(const FPCGAttributePropertyOutputSelector& Selector, const FPCGAttributePropertyInputSelector& InSelector);
    
    UFUNCTION(BlueprintCallable)
    static FPCGAttributePropertyInputSelector CopyAndFixLast(const FPCGAttributePropertyInputSelector& Selector, const UPCGData* InData);
    
};

