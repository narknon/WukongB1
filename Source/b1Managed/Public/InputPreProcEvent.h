#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGSInputType.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "InputPreProcEvent.generated.h"

UCLASS(Blueprintable)
class UInputPreProcEvent : public UObject {
    GENERATED_BODY()
public:
    UInputPreProcEvent();

    UFUNCTION(BlueprintCallable)
    void OnKeyUpEvent(FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnInputTrigger(EGSInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyDownEvent(FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseMoveEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseWheelEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnalogInputEvent(FAnalogInputEvent InAnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseButtonUpEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyKeyTriggerEvent(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseButtonDownEvent(FPointerEvent InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnInputTypeChangeTrigger(EGSInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseButtonDoubleClickEvent(FPointerEvent InMouseEvent);
    
};

