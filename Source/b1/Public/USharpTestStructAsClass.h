#pragma once
#include "CoreMinimal.h"
#include "USharpTestStructAsClass.generated.h"

USTRUCT(BlueprintType)
struct FUSharpTestStructAsClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Haha;
    
    B1_API FUSharpTestStructAsClass();
};

