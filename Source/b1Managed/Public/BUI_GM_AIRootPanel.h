#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GM_AIRootPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GM_AIRootPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GM_AIRootPanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnSwitchButtonPress();
    
};

