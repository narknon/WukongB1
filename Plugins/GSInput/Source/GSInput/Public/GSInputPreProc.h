#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSOnAnalogInputEventDelegate.h"
#include "GSOnAnyKeyTriggerEventDelegate.h"
#include "GSOnInputPreProcessEventDelegate.h"
#include "GSOnInputTypeChangeEventDelegate.h"
#include "GSOnKeyDownEventDelegate.h"
#include "GSOnKeyUpEventDelegate.h"
#include "GSOnMouseButtonDoubleClickEventDelegate.h"
#include "GSOnMouseButtonDownEventDelegate.h"
#include "GSOnMouseButtonUpEventDelegate.h"
#include "GSOnMouseMoveEventDelegate.h"
#include "GSOnMouseWheelEventDelegate.h"
#include "GSInputPreProc.generated.h"

UCLASS(Blueprintable)
class GSINPUT_API UGSInputPreProc : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputPreProcessEvent OnInputTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputTypeChangeEvent OnInputTypeChangeTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnKeyDownEvent OnKeyDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnKeyUpEvent OnKeyUpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnAnalogInputEvent OnAnalogInputEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseMoveEvent OnMouseMoveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseButtonDownEvent OnMouseButtonDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseButtonUpEvent OnMouseButtonUpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseButtonDoubleClickEvent OnMouseButtonDoubleClickEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseWheelEvent OnMouseWheelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnAnyKeyTriggerEvent OnAnyKeyTriggerEvent;
    
    UGSInputPreProc();

};

