#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GMRootPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMRootPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GMRootPanel();

    UFUNCTION(BlueprintCallable)
    void OnClickToDIYPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToSkillPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToCameraPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToDefaultPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToTeleportPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToOptimizePanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToCalliopePanel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickToHatredAndTargetPanel();
    
};

