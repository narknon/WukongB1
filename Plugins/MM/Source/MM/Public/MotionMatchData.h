#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MotionMatchData.generated.h"

USTRUCT(BlueprintType)
struct MM_API FMotionMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SelectedSkeletonBoneTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ElectedSourceReference;
    
    FMotionMatchData();
};

