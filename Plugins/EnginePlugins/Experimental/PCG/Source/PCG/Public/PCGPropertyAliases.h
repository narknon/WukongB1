#pragma once
#include "CoreMinimal.h"
#include "PCGPropertyAliases.generated.h"

USTRUCT(BlueprintType)
struct FPCGPropertyAliases {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Aliases;
    
    PCG_API FPCGPropertyAliases();
};

