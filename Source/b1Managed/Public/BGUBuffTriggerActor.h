#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUBuffTriggerActor.generated.h"

class UBUS_BuffTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUBuffTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_BuffTriggerConfigComp* BuffTriggerConfigComp;
    
    ABGUBuffTriggerActor(const FObjectInitializer& ObjectInitializer);

};

