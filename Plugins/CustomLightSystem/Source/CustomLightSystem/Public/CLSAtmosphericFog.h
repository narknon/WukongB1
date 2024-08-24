#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLSAtmosphericFog.generated.h"

class UCLSTagComponent;
class USkyAtmosphereComponent;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSAtmosphericFog : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* AtmosphericFogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCLSTagComponent* TagComponent;
    
    ACLSAtmosphericFog(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility);
    
};

