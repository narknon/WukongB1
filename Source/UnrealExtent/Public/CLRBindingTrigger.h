#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLRBindingTrigger.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API ACLRBindingTrigger : public AActor {
    GENERATED_BODY()
public:
    ACLRBindingTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateClrBindingCode();
    
};

