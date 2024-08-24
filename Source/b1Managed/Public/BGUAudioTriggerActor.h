#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUAudioTriggerActor.generated.h"

class UBUS_AudioTriggerComp;
class UBUS_AudioTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUAudioTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBUS_AudioTriggerComp* AudioTriggerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_AudioTriggerConfigComp* AudioTriggerConfigComp;
    
    ABGUAudioTriggerActor(const FObjectInitializer& ObjectInitializer);

};

