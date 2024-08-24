#pragma once
#include "CoreMinimal.h"
#include "EPCGIntersectionDensityFunction.h"
#include "PCGSettings.h"
#include "PCGInnerIntersectionSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGInnerIntersectionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGIntersectionDensityFunction DensityFunction;
    
    UPCGInnerIntersectionSettings();

};

