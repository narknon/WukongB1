#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_ItemInteractAreaSystem_CPU.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_ItemInteractAreaSystem_CPU : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocalPlayer;
    
public:
    UBUS_ItemInteractAreaSystem_CPU();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEnter(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLeave(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

