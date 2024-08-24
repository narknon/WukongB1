#pragma once
#include "CoreMinimal.h"
#include "BUS_BGUDataComp.h"
#include "BUS_SimpleBGUDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SimpleBGUDataComp : public UBUS_BGUDataComp {
    GENERATED_BODY()
public:
    UBUS_SimpleBGUDataComp(const FObjectInitializer& ObjectInitializer);

};

