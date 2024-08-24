#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BPS_PlayerStateDataCompB1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBPS_PlayerStateDataCompB1 : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBPS_PlayerStateDataCompB1(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreECSBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LateECSBeginPlay();
    
};

