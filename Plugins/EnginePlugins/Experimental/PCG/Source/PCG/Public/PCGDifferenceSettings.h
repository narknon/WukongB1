#pragma once
#include "CoreMinimal.h"
#include "EPCGDifferenceDensityFunction.h"
#include "EPCGDifferenceMode.h"
#include "PCGSettings.h"
#include "PCGDifferenceSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGDifferenceSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDifferenceDensityFunction DensityFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDifferenceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiffMetadata;
    
    UPCGDifferenceSettings();

};

