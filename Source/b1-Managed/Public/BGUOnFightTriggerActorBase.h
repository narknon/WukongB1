#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUOnFightTriggerActorBase.generated.h"

class UBUS_OnFightTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUOnFightTriggerActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_OnFightTriggerConfigComp* OnFightTriggerConfigComp;
    
    ABGUOnFightTriggerActorBase(const FObjectInitializer& ObjectInitializer);

};

