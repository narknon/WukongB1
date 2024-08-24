#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGWorldVolumetricQueryParams.h"
#include "PCGWorldQuerySettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGWorldQuerySettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGWorldVolumetricQueryParams QueryParams;
    
    UPCGWorldQuerySettings();

};

