#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DispLibEntityBase.h"
#include "B1X2_DispWorld.generated.h"

UCLASS(Blueprintable)
class AB1X2_DispWorld : public ADispLibEntityBase {
    GENERATED_BODY()
public:
    AB1X2_DispWorld(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
};

