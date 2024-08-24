#pragma once
#include "CoreMinimal.h"
#include "CameraRig_Crane.h"
#include "Engine/EngineTypes.h"
#include "BGUCameraRig_Crane.generated.h"

UCLASS(Blueprintable)
class ABGUCameraRig_Crane : public ACameraRig_Crane {
    GENERATED_BODY()
public:
    ABGUCameraRig_Crane(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

