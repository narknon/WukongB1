#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeFilterOperation.h"
#include "PCGSettings.h"
#include "PCGAttributeFilterSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGAttributeFilterSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeFilterOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedAttributes;
    
    UPCGAttributeFilterSettings();

};

