#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArteriesEdgeGroup.generated.h"

USTRUCT(BlueprintType)
struct ARTERIES_API FArteriesEdgeGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> IDs;
    
    FArteriesEdgeGroup();
};

