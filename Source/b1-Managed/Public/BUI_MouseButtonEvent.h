#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "BUI_MouseButtonEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_MouseButtonEvent : public UUserWidget {
    GENERATED_BODY()
public:
    UBUI_MouseButtonEvent();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnUserWidgetAnimationSequenceEvent(int32 Param);
    
};

