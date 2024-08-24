#pragma once
#include "CoreMinimal.h"
#include "CapturedInfoSequencePerPoint.h"
#include "CapturedInfoArrayPerPoint.generated.h"

USTRUCT(BlueprintType)
struct FCapturedInfoArrayPerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCapturedInfoSequencePerPoint> InfoMap;
    
    UNREALEXTENT_API FCapturedInfoArrayPerPoint();
};

