#pragma once
#include "CoreMinimal.h"
#include "JavscriptProperty.generated.h"

USTRUCT(BlueprintType)
struct FJavscriptProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    V8_API FJavscriptProperty();
};

