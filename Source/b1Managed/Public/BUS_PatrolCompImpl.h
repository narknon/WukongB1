#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_PatrolCompImpl.generated.h"

class AActor;
class ATriggerBase;

UCLASS(Blueprintable)
class UBUS_PatrolCompImpl : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* TriggerBox;
    
public:
    UBUS_PatrolCompImpl();

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerBoxOverlap(AActor* OverlapActor, AActor* OtherActor);
    
};

