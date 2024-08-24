#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "FGSBuffTriggerUnitCondition.h"
#include "BUS_BuffTriggerAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BuffTriggerAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGSBuffTriggerUnitCondition> ObserveUnitsConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerEndOverlapWhenDisable: 1;
    
    UBUS_BuffTriggerAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

