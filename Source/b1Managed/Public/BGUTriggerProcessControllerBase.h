#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUTriggerProcessControllerBase.generated.h"

class UBUS_TriggerProcessControlComp;

UCLASS(Blueprintable)
class ABGUTriggerProcessControllerBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TriggerProcessControlComp* TriggerProcessControlComp;
    
public:
    ABGUTriggerProcessControllerBase(const FObjectInitializer& ObjectInitializer);

};

