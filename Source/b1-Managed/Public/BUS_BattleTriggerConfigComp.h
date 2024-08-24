#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BattleTriggerConfig.h"
#include "BUS_BattleTriggerConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BattleTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleTriggerConfig BattleTriggerConfig;
    
    UBUS_BattleTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

