#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BUMapsymblolocationActor.generated.h"

class UBUS_MapSymbolConfigComp;

UCLASS(Blueprintable)
class ABUMapsymblolocationActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_MapSymbolConfigComp* MapsymblolConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseDebugDraw: 1;
    
    ABUMapsymblolocationActor(const FObjectInitializer& ObjectInitializer);

};

