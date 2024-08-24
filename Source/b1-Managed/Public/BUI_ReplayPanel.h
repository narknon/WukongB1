#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_ReplayPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ReplayPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_ReplayPanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnMouseCaptureEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnStopButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseCaptureBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnForwardButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayOrPauseButtonClicked();
    
};

