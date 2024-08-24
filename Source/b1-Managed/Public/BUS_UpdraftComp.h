#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_UpdraftComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_UpdraftComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_UpdraftComp();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

