#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUProceduralEnvInteractionActor.generated.h"

class UBUS_ProceduralEnvInteractionConfigComp;

UCLASS(Blueprintable)
class ABGUProceduralEnvInteractionActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ProceduralEnvInteractionConfigComp* ProceduralEnvInteractionConfigComp;
    
    ABGUProceduralEnvInteractionActor(const FObjectInitializer& ObjectInitializer);

};

