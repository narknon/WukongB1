#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CppTestStructInnerInner.generated.h"

USTRUCT(BlueprintType)
struct FCppTestStructInnerInner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameTag;
    
    B1_API FCppTestStructInnerInner();
};

