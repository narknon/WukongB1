#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_NeutralFXAnimalSpawnLogicComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_NeutralFXAnimalSpawnLogicComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_NeutralFXAnimalSpawnLogicComp();

private:
    UFUNCTION(BlueprintCallable)
    void StartEscape(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void StartEscapeWitchSpdCheck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

