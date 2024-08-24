#pragma once
#include "CoreMinimal.h"
#include "BUS_DecalDataComp.h"
#include "BUS_POMDecalDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_POMDecalDataComp : public UBUS_DecalDataComp {
    GENERATED_BODY()
public:
    UBUS_POMDecalDataComp(const FObjectInitializer& ObjectInitializer);

};

