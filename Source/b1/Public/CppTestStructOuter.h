#pragma once
#include "CoreMinimal.h"
#include "CppTestStructInner.h"
#include "CppTestStructOuter.generated.h"

USTRUCT(BlueprintType)
struct FCppTestStructOuter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCppTestStructInner> ItemStructs;
    
    B1_API FCppTestStructOuter();
};

