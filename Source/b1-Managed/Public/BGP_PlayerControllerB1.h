#pragma once
#include "CoreMinimal.h"
#include "BGP_PlayerControllerCS.h"
#include "BGP_PlayerControllerB1.generated.h"

UCLASS(Blueprintable)
class ABGP_PlayerControllerB1 : public ABGP_PlayerControllerCS {
    GENERATED_BODY()
public:
    ABGP_PlayerControllerB1(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PawnCS();
    
};

