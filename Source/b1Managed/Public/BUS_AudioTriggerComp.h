#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BUS_AudioTriggerComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AudioTriggerComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UBUS_AudioTriggerComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

