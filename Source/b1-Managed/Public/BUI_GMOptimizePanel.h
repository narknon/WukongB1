#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GMOptimizePanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMOptimizePanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GMOptimizePanel();

    UFUNCTION(BlueprintCallable)
    void OnRunBtnClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnToHFSBtnClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnToHFMBtnClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnToOriginMapBtnClicked();
    
};

