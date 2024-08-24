#pragma once
#include "CoreMinimal.h"
#include "PCGLandscapeLayerWeight.generated.h"

USTRUCT(BlueprintType)
struct FPCGLandscapeLayerWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PCG_API FPCGLandscapeLayerWeight();
};

