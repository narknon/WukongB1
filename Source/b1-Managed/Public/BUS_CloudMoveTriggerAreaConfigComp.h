#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_CloudMoveTriggerAreaConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CloudMoveTriggerAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreCoolDown;
    
    UBUS_CloudMoveTriggerAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

