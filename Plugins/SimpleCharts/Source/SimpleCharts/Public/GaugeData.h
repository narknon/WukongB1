#pragma once
#include "CoreMinimal.h"
#include "GaugeData.generated.h"

USTRUCT(BlueprintType)
struct FGaugeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    SIMPLECHARTS_API FGaugeData();
};

