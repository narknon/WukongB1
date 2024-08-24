#pragma once
#include "CoreMinimal.h"
#include "BUS_BGUDataCompBase.h"
#include "BUS_PerformerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_PerformerDataComp : public UBUS_BGUDataCompBase {
    GENERATED_BODY()
public:
    UBUS_PerformerDataComp(const FObjectInitializer& ObjectInitializer);

};

