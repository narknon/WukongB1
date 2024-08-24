#pragma once
#include "CoreMinimal.h"
#include "PCGTaggedData.h"
#include "PCGDataCollection.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGTaggedData> TaggedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelExecutionOnEmpty;
    
    FPCGDataCollection();
};

