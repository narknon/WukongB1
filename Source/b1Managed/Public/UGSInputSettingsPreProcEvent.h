#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "UGSInputSettingsPreProcEvent.generated.h"

UCLASS(Blueprintable)
class UUGSInputSettingsPreProcEvent : public UObject {
    GENERATED_BODY()
public:
    UUGSInputSettingsPreProcEvent();

private:
    UFUNCTION(BlueprintCallable)
    void OnKeyUpEvent(FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyDownEvent(FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseButtonUpEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseButtonDownEvent(FPointerEvent InMouseEvent);
    
};

