#pragma once
#include "CoreMinimal.h"
#include "BUS_AreaBaseDataContainer.h"
#include "BUS_GroupAIDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GroupAIDataComp : public UBUS_AreaBaseDataContainer {
    GENERATED_BODY()
public:
    UBUS_GroupAIDataComp(const FObjectInitializer& ObjectInitializer);

};

