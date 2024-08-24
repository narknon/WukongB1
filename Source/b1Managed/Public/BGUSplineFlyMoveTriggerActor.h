#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSplineFlyMoveTriggerActor.generated.h"

class UBUS_SplineFlyMoveTriggerConfigComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUSplineFlyMoveTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EndTriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SplineFlyMoveTriggerConfigComp* SplineFlyMoveTriggerConfigComp;
    
    ABGUSplineFlyMoveTriggerActor(const FObjectInitializer& ObjectInitializer);

};

