#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLSSkyLight.generated.h"

class UCLSTagComponent;
class USkyLightComponent;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSSkyLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCLSTagComponent* TagComponent;
    
    ACLSSkyLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility) const;
    
};

