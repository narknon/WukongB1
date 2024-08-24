#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUIntervalArea.generated.h"

class UBUS_IntervalTriggerConfigComp;
class UBUS_WanderBGMAreaConfigComp;

UCLASS(Blueprintable)
class ABGUIntervalArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_WanderBGMAreaConfigComp* WanderBGMAreaConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_IntervalTriggerConfigComp* IntervalTriggerConfigComp;
    
    ABGUIntervalArea(const FObjectInitializer& ObjectInitializer);

};

