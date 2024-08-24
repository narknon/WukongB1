#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "Engine/EngineTypes.h"
#include "BGUCineCameraActor.generated.h"

UCLASS(Blueprintable)
class ABGUCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    ABGUCineCameraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

