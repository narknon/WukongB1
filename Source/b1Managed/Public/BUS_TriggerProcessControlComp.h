#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "SceneObjTriggerEvent.h"
#include "SceneObjWithState.h"
#include "BUS_TriggerProcessControlComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TriggerProcessControlComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSceneObjWithState> AttachedTriggerObjs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSceneObjTriggerEvent> NeedActivateObjs;
    
    UBUS_TriggerProcessControlComp(const FObjectInitializer& ObjectInitializer);

};

