#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUNarrator.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class ABGUNarrator : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    ABGUNarrator(const FObjectInitializer& ObjectInitializer);

};

