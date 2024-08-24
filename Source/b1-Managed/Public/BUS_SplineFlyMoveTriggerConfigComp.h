#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "SplineFlyMoveConfig.h"
#include "BUS_SplineFlyMoveTriggerConfigComp.generated.h"

class ABGUSceneItemBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SplineFlyMoveTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineFlyMoveConfig> SplineFlyMoveConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OnlyTransitionPlayerCanTrigger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsPlayerObserveMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceVelocityCameraSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestoryControlledUnitInActived: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUSceneItemBase> SceneItem;
    
    UBUS_SplineFlyMoveTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

