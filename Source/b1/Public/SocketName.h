#pragma once
#include "CoreMinimal.h"
#include "SocketName.generated.h"

USTRUCT(BlueprintType)
struct FSocketName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondSocketName;
    
    B1_API FSocketName();
};

