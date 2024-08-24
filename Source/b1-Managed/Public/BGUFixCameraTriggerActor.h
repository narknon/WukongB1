#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUFixCameraTriggerActor.generated.h"

class UBUS_FixCameraTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUFixCameraTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_FixCameraTriggerConfigComp* FixCameraTriggerConfigComp;
    
    ABGUFixCameraTriggerActor(const FObjectInitializer& ObjectInitializer);

};

