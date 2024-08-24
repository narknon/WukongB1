#pragma once
#include "CoreMinimal.h"
#include "PCGPreConfiguredSettingsInfo.generated.h"

USTRUCT(BlueprintType)
struct FPCGPreConfiguredSettingsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreconfiguredIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    PCG_API FPCGPreConfiguredSettingsInfo();
};

