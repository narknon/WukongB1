#pragma once
#include "CoreMinimal.h"
#include "Data.generated.h"

USTRUCT(BlueprintType)
struct FData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Value;
    
    SIMPLECHARTS_API FData();
};

