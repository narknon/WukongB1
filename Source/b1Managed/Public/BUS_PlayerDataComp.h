#pragma once
#include "CoreMinimal.h"
#include "BUS_BGUDataComp.h"
#include "BUS_PlayerDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_PlayerDataComp : public UBUS_BGUDataComp {
    GENERATED_BODY()
public:
    UBUS_PlayerDataComp(const FObjectInitializer& ObjectInitializer);

};

