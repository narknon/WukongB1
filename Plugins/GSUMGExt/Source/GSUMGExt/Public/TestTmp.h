#pragma once
#include "CoreMinimal.h"
#include "TestTmp.generated.h"

class UGCTestA;

USTRUCT(BlueprintType)
struct GSUMGEXT_API FTestTmp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGCTestA* TestA;
    
    FTestTmp();
};

