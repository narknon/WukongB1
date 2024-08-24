#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUAudioEmitter.generated.h"

class UAkComponent;
class UBUS_AudioEmitterEditComp;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ABGUAudioEmitter : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_AudioEmitterEditComp* AudioEmitterEditComp;
    
    ABGUAudioEmitter(const FObjectInitializer& ObjectInitializer);

};

