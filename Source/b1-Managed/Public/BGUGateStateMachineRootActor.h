#pragma once
#include "CoreMinimal.h"
#include "BGUGateStateMachineActor.h"
#include "BGUGateStateMachineRootActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ABGUGateStateMachineRootActor : public ABGUGateStateMachineActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComp;
    
public:
    ABGUGateStateMachineRootActor(const FObjectInitializer& ObjectInitializer);

};

