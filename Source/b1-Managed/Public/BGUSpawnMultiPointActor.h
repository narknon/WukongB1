#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSpawnMultiPointActor.generated.h"

class UBUS_SpawnMultiPointComp;

UCLASS(Blueprintable)
class ABGUSpawnMultiPointActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpawnMultiPointComp* SpawnMultiPointConfigComp;
    
    ABGUSpawnMultiPointActor(const FObjectInitializer& ObjectInitializer);

};

