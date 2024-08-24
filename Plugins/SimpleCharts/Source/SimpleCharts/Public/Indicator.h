#pragma once
#include "CoreMinimal.h"
#include "Indicator.generated.h"

USTRUCT(BlueprintType)
struct FIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    SIMPLECHARTS_API FIndicator();
};

