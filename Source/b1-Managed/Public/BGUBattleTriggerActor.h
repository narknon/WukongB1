#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUBattleTriggerActor.generated.h"

class UBUS_BattleTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUBattleTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_BattleTriggerConfigComp* BattleTriggerConfigComp;
    
    ABGUBattleTriggerActor(const FObjectInitializer& ObjectInitializer);

};

