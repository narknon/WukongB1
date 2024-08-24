#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "UGSKeyEvent.generated.h"

UCLASS(Blueprintable)
class UUGSKeyEvent : public UObject {
    GENERATED_BODY()
public:
    UUGSKeyEvent();

private:
    UFUNCTION(BlueprintCallable)
    void OnKeyUpEvent(FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyDownEvent(FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseUpEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseDownEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseWheelEvent(FPointerEvent InWheelEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnalogInputEvent(FAnalogInputEvent AnalogInputEvent);
    
};

