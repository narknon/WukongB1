#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGExternalDataSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGExternalDataSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPCGAttributePropertyInputSelector> AttributeMapping;
    
    UPCGExternalDataSettings();

};

