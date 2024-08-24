#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/GameModeBase.h"
#include "B1_StartupGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AB1_StartupGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AB1_StartupGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
};

