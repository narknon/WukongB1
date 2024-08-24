#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUFXAnimalActor.generated.h"

class UBUS_FXAnimalEditComp;
class UBoxComponent;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUFXAnimalActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_FXAnimalEditComp* FXAnimalConfigComp;
    
    ABGUFXAnimalActor(const FObjectInitializer& ObjectInitializer);

};

