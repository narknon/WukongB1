#pragma once
#include "CoreMinimal.h"
#include "ReadStringFromFileAsyncData.generated.h"

USTRUCT(BlueprintType)
struct FReadStringFromFileAsyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    V8_API FReadStringFromFileAsyncData();
};

