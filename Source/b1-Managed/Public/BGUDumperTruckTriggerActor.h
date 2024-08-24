#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUDumperTruckTriggerActor.generated.h"

class UBUS_DumperTruckTriggerConfigComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUDumperTruckTriggerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EndTriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DumperTruckTriggerConfigComp* DumperTruckTriggerConfigComp;
    
    ABGUDumperTruckTriggerActor(const FObjectInitializer& ObjectInitializer);

};

