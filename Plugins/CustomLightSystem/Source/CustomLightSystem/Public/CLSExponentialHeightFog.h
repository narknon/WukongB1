#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLSExponentialHeightFog.generated.h"

class UCLSTagComponent;
class UExponentialHeightFogComponent;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSExponentialHeightFog : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ExponentialHeightFogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCLSTagComponent* TagComponent;
    
    ACLSExponentialHeightFog(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility) const;
    
};

