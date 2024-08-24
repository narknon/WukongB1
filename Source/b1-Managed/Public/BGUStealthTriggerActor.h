#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUStealthTriggerActor.generated.h"

class UBUS_StealthTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUStealthTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_StealthTriggerConfigComp* StealthTriggerConfigComp;
    
    ABGUStealthTriggerActor(const FObjectInitializer& ObjectInitializer);

};

