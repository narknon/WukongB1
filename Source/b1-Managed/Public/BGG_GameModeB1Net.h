#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGG_GameModeB1.h"
#include "BGG_GameModeB1Net.generated.h"

class APlayerController;

UCLASS(Blueprintable, NonTransient)
class ABGG_GameModeB1Net : public ABGG_GameModeB1 {
    GENERATED_BODY()
public:
    ABGG_GameModeB1Net(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostLoginCS(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
};

