#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_MFNegativeOverlapComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_MFNegativeOverlapComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_MFNegativeOverlapComp();

private:
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent);
    
};

