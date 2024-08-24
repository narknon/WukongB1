#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "WBP_ActorDraggingController.generated.h"

class UDragDropOperation;

UCLASS(Blueprintable, EditInlineNew)
class UWBP_ActorDraggingController : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDragDropOperation> dragDropOperationTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dragBeginPos;
    
    UWBP_ActorDraggingController();

    UFUNCTION(BlueprintCallable)
    bool OnDragOverCallback(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void OnDragDetectedCallback(FGeometry MyGeometry, FPointerEvent PointerEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnDragCancelledCallback(FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnMouseButtonDownCallback(FGeometry MyGeometry, FPointerEvent MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnDragCancelled(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
};

