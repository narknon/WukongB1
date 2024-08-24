#pragma once
#include "CoreMinimal.h"
#include "BGUDataComp.h"
#include "BUS_BGUDataCompBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_BGUDataCompBase : public UBGUDataComp {
    GENERATED_BODY()
public:
    UBUS_BGUDataCompBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitOnNewInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestoryInCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreECSBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LateECSBeginPlay();
    
};

