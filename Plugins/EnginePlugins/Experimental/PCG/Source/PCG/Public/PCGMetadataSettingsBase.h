#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "PCGMetadataSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGMetadataSettingsBase : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector OutputTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputDataFromPin;
    
    UPCGMetadataSettingsBase();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetOutputDataFromPinOptions() const;
    
};

