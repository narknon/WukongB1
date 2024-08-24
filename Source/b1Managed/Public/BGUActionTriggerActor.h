#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUActionTriggerActor.generated.h"

class UBUS_ActionTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUActionTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ActionTriggerConfigComp* ActionTriggerConfigComp;
    
    ABGUActionTriggerActor(const FObjectInitializer& ObjectInitializer);

};

