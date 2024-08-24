#pragma once
#include "CoreMinimal.h"
#include "GaugeData.h"
#include "GaugeSeries.generated.h"

USTRUCT(BlueprintType)
struct FGaugeSeries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGaugeData> Data;
    
    SIMPLECHARTS_API FGaugeSeries();
};

