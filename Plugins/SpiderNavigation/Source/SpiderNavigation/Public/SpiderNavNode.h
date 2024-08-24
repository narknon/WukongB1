#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpiderNavNode.generated.h"

USTRUCT(BlueprintType)
struct FSpiderNavNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    SPIDERNAVIGATION_API FSpiderNavNode();
};

