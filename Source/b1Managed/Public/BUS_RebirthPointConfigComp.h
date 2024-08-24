#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "RebirthPointConfig.h"
#include "BUS_RebirthPointConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_RebirthPointConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebirthPointConfig RebirthPointConfig;
    
    UBUS_RebirthPointConfigComp(const FObjectInitializer& ObjectInitializer);

};

