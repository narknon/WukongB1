#pragma once
#include "CoreMinimal.h"
#include "CameraRig_Rail.h"
#include "Engine/EngineTypes.h"
#include "BGUCameraRig_Rail.generated.h"

UCLASS(Blueprintable)
class ABGUCameraRig_Rail : public ACameraRig_Rail {
    GENERATED_BODY()
public:
    ABGUCameraRig_Rail(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

