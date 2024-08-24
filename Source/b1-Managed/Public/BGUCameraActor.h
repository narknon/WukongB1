#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Engine/EngineTypes.h"
#include "BGUCameraActor.generated.h"

UCLASS(Blueprintable)
class ABGUCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    ABGUCameraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

