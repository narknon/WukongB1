#pragma once
#include "CoreMinimal.h"
#include "EPCGUnionDensityFunction.h"
#include "EPCGUnionType.h"
#include "PCGSettings.h"
#include "PCGUnionSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGUnionSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUnionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGUnionDensityFunction DensityFunction;
    
    UPCGUnionSettings();

};

