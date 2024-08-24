#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UStCheckTransformArray.generated.h"

USTRUCT(BlueprintType)
struct FUStCheckTransformArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformList;
    
    B1_API FUStCheckTransformArray();
};

