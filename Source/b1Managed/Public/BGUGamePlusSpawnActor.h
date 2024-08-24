#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUGamePlusSpawnActor.generated.h"

class UBUS_GamePlusSpawnComp;

UCLASS(Blueprintable)
class ABGUGamePlusSpawnActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GamePlusSpawnComp* GamePlusSpawnConfigComp;
    
    ABGUGamePlusSpawnActor(const FObjectInitializer& ObjectInitializer);

};

