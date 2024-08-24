#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_GroupAIAreaCompImpl.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_GroupAIAreaCompImpl : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_GroupAIAreaCompImpl();

protected:
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

