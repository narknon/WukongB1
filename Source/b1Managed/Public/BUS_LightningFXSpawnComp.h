#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "LightningFXSpawnConfig.h"
#include "BUS_LightningFXSpawnComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_LightningFXSpawnComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightningFXSpawnConfig LightningFXSpawnConfig;
    
    UBUS_LightningFXSpawnComp(const FObjectInitializer& ObjectInitializer);

};

