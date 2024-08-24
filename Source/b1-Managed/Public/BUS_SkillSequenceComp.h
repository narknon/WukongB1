#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_SkillSequenceComp.generated.h"

UCLASS(Blueprintable)
class UBUS_SkillSequenceComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_SkillSequenceComp();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
};

