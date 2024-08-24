#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSDFMaker.generated.h"

class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ABGUSDFMaker : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Interact_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Interact_2;
    
public:
    ABGUSDFMaker(const FObjectInitializer& ObjectInitializer);

};

