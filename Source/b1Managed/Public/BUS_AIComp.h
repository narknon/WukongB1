#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_AIComp.generated.h"

class AActor;
class UAIPerceptionComponent;

UCLASS(Blueprintable)
class UBUS_AIComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComp;
    
public:
    UBUS_AIComp();

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Target, FAIStimulus Stimulus);
    
};

