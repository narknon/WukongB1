#pragma once
#include "CoreMinimal.h"
#include "BGP_PlayerControllerCS.h"
#include "BGP_ReplayPlayerController.generated.h"

UCLASS(Blueprintable)
class ABGP_ReplayPlayerController : public ABGP_PlayerControllerCS {
    GENERATED_BODY()
public:
    ABGP_ReplayPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PawnCS();
    
};

