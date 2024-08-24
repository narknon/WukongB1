#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUDroppedItemManagerActor.generated.h"

class UBUS_DroppedItemManagerConfigComp;

UCLASS(Blueprintable)
class ABGUDroppedItemManagerActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DroppedItemManagerConfigComp* DroppedItemManagerConfigComp;
    
    ABGUDroppedItemManagerActor(const FObjectInitializer& ObjectInitializer);

};

