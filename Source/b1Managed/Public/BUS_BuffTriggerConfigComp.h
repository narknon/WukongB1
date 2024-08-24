#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "FGSBuffTriggerUnitCondition.h"
#include "BUS_BuffTriggerConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BuffTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerEndOverlapWhenDisable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGSBuffTriggerUnitCondition> ObserveUnitsConditions;
    
    UBUS_BuffTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

