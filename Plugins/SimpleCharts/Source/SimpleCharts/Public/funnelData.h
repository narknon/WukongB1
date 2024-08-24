#pragma once
#include "CoreMinimal.h"
#include "funnelData.generated.h"

USTRUCT(BlueprintType)
struct FfunnelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    SIMPLECHARTS_API FfunnelData();
};

