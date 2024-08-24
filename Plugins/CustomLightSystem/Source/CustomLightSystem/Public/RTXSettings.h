#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RTXSettings.generated.h"

UINTERFACE(Blueprintable)
class URTXSettings : public UInterface {
    GENERATED_BODY()
};

class IRTXSettings : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRTXQuality(uint8 Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRTXEnabled(bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDlssRREnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRTXEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDLSSRREnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    uint8 GetRTXQuality();
    
};

