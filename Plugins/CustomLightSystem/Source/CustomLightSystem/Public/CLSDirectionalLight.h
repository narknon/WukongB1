#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLSDirectionalLight.generated.h"

class UCLSTagComponent;
class UDirectionalLightComponent;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSDirectionalLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* DirectionalLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCLSTagComponent* TagComponent;
    
    ACLSDirectionalLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility) const;
    
};

