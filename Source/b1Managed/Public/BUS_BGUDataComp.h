#pragma once
#include "CoreMinimal.h"
#include "BUS_BGUDataCompBase.h"
#include "BUS_BGUDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BGUDataComp : public UBUS_BGUDataCompBase {
    GENERATED_BODY()
public:
    UBUS_BGUDataComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LateECSBeginPlay();
    
};

