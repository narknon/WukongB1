#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUUpdraftActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ABGUUpdraftActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* UpdraftVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CD;
    
    ABGUUpdraftActor(const FObjectInitializer& ObjectInitializer);

};

