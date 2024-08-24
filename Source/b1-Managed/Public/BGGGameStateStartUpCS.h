#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/GameState.h"
#include "BGGGameStateStartUpCS.generated.h"

UCLASS(Blueprintable)
class ABGGGameStateStartUpCS : public AGameState {
    GENERATED_BODY()
public:
    ABGGGameStateStartUpCS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
};

