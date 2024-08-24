#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "DonNavigator.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDonNavigator : public UInterface {
    GENERATED_BODY()
};

class IDonNavigator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNextSegment(FVector NextPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionEnd(const bool bLocomotionSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionAbort();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMovementInputCustom(FVector WorldDirection, float ScaleValue);
    
};

