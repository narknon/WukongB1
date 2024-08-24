#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "MapSymbolConfig.h"
#include "BUS_MapSymbolConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_MapSymbolConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapSymbolConfig MapSymbolConfig;
    
    UBUS_MapSymbolConfigComp(const FObjectInitializer& ObjectInitializer);

};

