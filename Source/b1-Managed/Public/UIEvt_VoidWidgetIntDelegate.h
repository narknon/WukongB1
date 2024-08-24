#pragma once
#include "CoreMinimal.h"
#include "UIEvt_VoidWidgetIntDelegate.generated.h"

class UBUI_Widget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FUIEvt_VoidWidgetInt, UBUI_Widget*, Widget, int32, ParamInt);

