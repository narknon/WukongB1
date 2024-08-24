#pragma once
#include "CoreMinimal.h"
#include "BUS_FXDataComp.h"
#include "BUS_DecalDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DecalDataComp : public UBUS_FXDataComp {
    GENERATED_BODY()
public:
    UBUS_DecalDataComp(const FObjectInitializer& ObjectInitializer);

};

