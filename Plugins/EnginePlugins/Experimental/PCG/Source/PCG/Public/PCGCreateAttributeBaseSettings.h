#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGSettings.h"
#include "PCGCreateAttributeBaseSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGCreateAttributeBaseSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisplayFromSourceParamSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct AttributeTypes;
    
    UPCGCreateAttributeBaseSettings();

};

