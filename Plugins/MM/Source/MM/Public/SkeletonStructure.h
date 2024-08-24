#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkeletonStructure.generated.h"

USTRUCT(BlueprintType)
struct MM_API FSkeletonStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoneTransformPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoneTransformVelocity;
    
    FSkeletonStructure();
};

