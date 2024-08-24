#pragma once
#include "CoreMinimal.h"
#include "SpiderNavRelations.generated.h"

USTRUCT(BlueprintType)
struct FSpiderNavRelations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Neighbors;
    
    SPIDERNAVIGATION_API FSpiderNavRelations();
};

