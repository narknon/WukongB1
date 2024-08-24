#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "BUI_Widget.h"
#include "BUI_DraggableV2.generated.h"

class UDragDropOperation;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_DraggableV2 : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_DraggableV2();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnDragCancelled(const FPointerEvent& MouseEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
};

