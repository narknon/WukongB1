#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UDSSettingFunctionBinder.generated.h"

UCLASS(Blueprintable)
class UUDSSettingFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    UUDSSettingFunctionBinder();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCultureChangedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnViewportResizedEvent(FIntPoint NewSize);
    
    UFUNCTION(BlueprintCallable)
    void OnMonitorAsPrimaryChange(int32 MonitorIdx);
    
};

