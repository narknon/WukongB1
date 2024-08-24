#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUOnlineAssistTriggerActorBase.generated.h"

class UBUS_OnlineAssistTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUOnlineAssistTriggerActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_OnlineAssistTriggerConfigComp* OnlineAssistTriggerConfig;
    
    ABGUOnlineAssistTriggerActorBase(const FObjectInitializer& ObjectInitializer);

};

