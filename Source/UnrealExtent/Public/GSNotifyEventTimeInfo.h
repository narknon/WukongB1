#pragma once
#include "CoreMinimal.h"
#include "GSNotifyEventTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FGSNotifyEventTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTriggerTime;
    
    UNREALEXTENT_API FGSNotifyEventTimeInfo();
};

