#pragma once
#include "CoreMinimal.h"
#include "PCGProjectionParams.h"
#include "PCGSettings.h"
#include "PCGProjectionSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGProjectionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGProjectionParams ProjectionParams;
    
    UPCGProjectionSettings();

};

