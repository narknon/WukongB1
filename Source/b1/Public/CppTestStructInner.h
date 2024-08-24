#pragma once
#include "CoreMinimal.h"
#include "CppTestStructInnerInner.h"
#include "CppTestStructInner.generated.h"

USTRUCT(BlueprintType)
struct FCppTestStructInner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemInts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCppTestStructInnerInner> InnerStruct;
    
    B1_API FCppTestStructInner();
};

