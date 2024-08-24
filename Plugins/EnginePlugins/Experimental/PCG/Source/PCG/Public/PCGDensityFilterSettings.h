#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGDensityFilterSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGDensityFilterSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertFilter;
    
    UPCGDensityFilterSettings();

};

