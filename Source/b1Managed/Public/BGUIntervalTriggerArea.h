#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUIntervalTriggerArea.generated.h"

class UBUS_IntervalTriggerAreaConfigComp;

UCLASS(Blueprintable)
class ABGUIntervalTriggerArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_IntervalTriggerAreaConfigComp* IntervalTriggerAreaConfigComp;
    
    ABGUIntervalTriggerArea(const FObjectInitializer& ObjectInitializer);

};

