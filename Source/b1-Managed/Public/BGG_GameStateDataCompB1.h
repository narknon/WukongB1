#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BGG_GameStateDataCompB1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGG_GameStateDataCompB1 : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBGG_GameStateDataCompB1(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreECSBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LateECSBeginPlay();
    
};

