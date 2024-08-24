#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeGetFromPointIndexSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAttributeGetFromPointIndexSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPCGAttributeGetFromPointIndexSettings();

};

