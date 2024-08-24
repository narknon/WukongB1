#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_LandingZoneComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_LandingZoneComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_LandingZoneComp();

private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

