#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUCutDeathActor.generated.h"

class ABGUCharacterCS;
class UCapsuleComponent;

UCLASS(Blueprintable)
class ABGUCutDeathActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectAttackSocket;
    
    ABGUCutDeathActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PreviewPhy(ABGUCharacterCS* OwnerChar);
    
};

