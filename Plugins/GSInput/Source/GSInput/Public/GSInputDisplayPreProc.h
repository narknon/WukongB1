#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSOnInputAxisChangeEventDelegate.h"
#include "GSOnInputKeyDownEventDelegate.h"
#include "GSOnInputKeyUpEventDelegate.h"
#include "GSOnInputMouseButtonDoubleClickEventDelegate.h"
#include "GSOnInputMouseButtonDownEventDelegate.h"
#include "GSOnInputMouseButtonUpEventDelegate.h"
#include "GSOnInputMouseMoveEventDelegate.h"
#include "GSOnInputMouseWheelOrGestureEventDelegate.h"
#include "GSInputDisplayPreProc.generated.h"

UCLASS(Blueprintable)
class GSINPUT_API UGSInputDisplayPreProc : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputKeyDownEvent OnInputKeyDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputKeyUpEvent OnInputKeyUpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputAxisChangeEvent OnInputAxisChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputMouseMoveEvent OnInputMouseMoveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputMouseButtonDownEvent OnInputMouseButtonDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputMouseButtonUpEvent OnInputMouseButtonUpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputMouseButtonDoubleClickEvent OnInputMouseButtonDoubleClickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnInputMouseWheelOrGestureEvent OnInputMouseWheelOrGestureDelegate;
    
    UGSInputDisplayPreProc();

};

