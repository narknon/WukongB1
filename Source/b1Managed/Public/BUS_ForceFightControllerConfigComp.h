#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "FGSForceFightUnitGroupConfig.h"
#include "BUS_ForceFightControllerConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ForceFightControllerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGSForceFightUnitGroupConfig> ForceFightControlConfig;
    
    UBUS_ForceFightControllerConfigComp(const FObjectInitializer& ObjectInitializer);

};

