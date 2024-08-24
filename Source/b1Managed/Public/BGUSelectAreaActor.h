#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSelectAreaActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ABGUSelectAreaActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxArea;
    
public:
    ABGUSelectAreaActor(const FObjectInitializer& ObjectInitializer);

};

