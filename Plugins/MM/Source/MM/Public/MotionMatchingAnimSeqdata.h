#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAnimSeqAssetLoadStatType.h"
#include "MotionMatchingAnimSeqdata.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct MM_API FMotionMatchingAnimSeqdata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationInMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimationSoftPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimSeqAssetLoadStatType AnimationsAssetLoadStat;
    
    FMotionMatchingAnimSeqdata();
};

