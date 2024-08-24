#pragma once
#include "CoreMinimal.h"
#include "CLSPostVolume.h"
#include "CLSSplinePrismVolume.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class CUSTOMLIGHTSYSTEM_API ACLSSplinePrismVolume : public ACLSPostVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    ACLSSplinePrismVolume(const FObjectInitializer& ObjectInitializer);

};

