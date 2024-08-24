#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_DynamicObstacleConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DynamicObstacleConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDefaultEnable: 1;
    
    UBUS_DynamicObstacleConfigComp(const FObjectInitializer& ObjectInitializer);

};

