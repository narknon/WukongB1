#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGSplineSamplerParams.h"
#include "PCGSplineSamplerSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSplineSamplerSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSplineSamplerParams SamplerParams;
    
    UPCGSplineSamplerSettings();

};

