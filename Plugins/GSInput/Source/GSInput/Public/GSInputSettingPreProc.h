#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSOnKeyDownEventDelegate.h"
#include "GSOnKeyUpEventDelegate.h"
#include "GSOnMouseButtonDownEventDelegate.h"
#include "GSOnMouseButtonUpEventDelegate.h"
#include "GSInputSettingPreProc.generated.h"

UCLASS(Blueprintable)
class GSINPUT_API UGSInputSettingPreProc : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnKeyDownEvent OnKeyDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnKeyUpEvent OnKeyUpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseButtonDownEvent OnMouseButtonDownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnMouseButtonUpEvent OnMouseButtonUpEvent;
    
    UGSInputSettingPreProc();

};

