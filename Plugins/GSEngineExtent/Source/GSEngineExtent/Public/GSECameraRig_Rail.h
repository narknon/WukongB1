#pragma once
#include "CoreMinimal.h"
#include "CameraRig_Rail.h"
#include "GSECameraRig_Rail.generated.h"

UCLASS(Blueprintable)
class GSENGINEEXTENT_API AGSECameraRig_Rail : public ACameraRig_Rail {
    GENERATED_BODY()
public:
    AGSECameraRig_Rail(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    float GetSplineLength();
    
};

