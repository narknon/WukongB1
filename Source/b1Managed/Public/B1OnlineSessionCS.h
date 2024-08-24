#pragma once
#include "CoreMinimal.h"
#include "B1OnlineSession.h"
#include "B1OnlineSessionCS.generated.h"

class UNetDriver;
class UWorld;

UCLASS(Blueprintable)
class UB1OnlineSessionCS : public UB1OnlineSession {
    GENERATED_BODY()
public:
    UB1OnlineSessionCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDisconnectCS(UWorld* World, UNetDriver* NetDriver);
    
};

