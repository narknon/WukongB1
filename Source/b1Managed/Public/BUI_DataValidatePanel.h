#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_DataValidatePanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_DataValidatePanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_DataValidatePanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickOpenLog();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckDisplayFull(bool bIsChecked);
    
};

