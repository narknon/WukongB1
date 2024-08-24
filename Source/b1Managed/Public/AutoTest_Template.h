#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutoTest_Template.generated.h"

UCLASS(Blueprintable)
class UAutoTest_Template : public UObject {
    GENERATED_BODY()
public:
    UAutoTest_Template();

    UFUNCTION(BlueprintCallable)
    void RunTest();
    
    UFUNCTION(BlueprintCallable)
    void StopTest();
    
    UFUNCTION(BlueprintCallable)
    void SetupTest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveStartTest();
    
};

