#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BUSpawnCollectionActor.generated.h"

class UBUS_SpawnCollectionComp;

UCLASS(Blueprintable)
class ABUSpawnCollectionActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpawnCollectionComp* SpawnCollectionComp;
    
    ABUSpawnCollectionActor(const FObjectInitializer& ObjectInitializer);

};

