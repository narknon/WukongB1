#pragma once
#include "CoreMinimal.h"
#include "UIEvt_VoidWidgetDelegate.generated.h"

class UBUI_Widget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUIEvt_VoidWidget, UBUI_Widget*, Widget);

