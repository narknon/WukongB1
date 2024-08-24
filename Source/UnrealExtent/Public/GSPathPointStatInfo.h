#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSPathPointStatInfo.generated.h"

USTRUCT(BlueprintType)
struct FGSPathPointStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> StatNameAndValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Duration;
    
    UNREALEXTENT_API FGSPathPointStatInfo();
};

