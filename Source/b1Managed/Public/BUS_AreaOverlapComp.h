#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_AreaOverlapComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_AreaOverlapComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_AreaOverlapComp();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnterActor(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeaveActor(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnter_EnterArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave_EnterArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

