#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_FXAnimalCommComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_FXAnimalCommComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_FXAnimalCommComp();

private:
    UFUNCTION(BlueprintCallable)
    void StartEscape(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

