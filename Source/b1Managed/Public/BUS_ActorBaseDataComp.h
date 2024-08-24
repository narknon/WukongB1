#pragma once
#include "CoreMinimal.h"
#include "ActorDataContainer.h"
#include "BUS_ActorBaseDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ActorBaseDataComp : public UActorDataContainer {
    GENERATED_BODY()
public:
    UBUS_ActorBaseDataComp(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitOnNewInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestoryInCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreECSBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LateECSBeginPlay();
    
};

