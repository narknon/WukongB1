#pragma once
#include "CoreMinimal.h"
#include "BGUFXActorBase.h"
#include "BGULightningFXActorBase.generated.h"

class UBUS_LightningFXSpawnComp;

UCLASS(Blueprintable)
class ABGULightningFXActorBase : public ABGUFXActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_LightningFXSpawnComp* LightningFXSpawnComp;
    
public:
    ABGULightningFXActorBase(const FObjectInitializer& ObjectInitializer);

};

