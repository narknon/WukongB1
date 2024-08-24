#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_GMSkillPanel.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMSkillPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CheckTemp;
    
    UBUI_GMSkillPanel();

    UFUNCTION(BlueprintCallable)
    void OnToggleDS(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleFS(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleJC(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleZZG(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleCCG(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleTTTB(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleFTXD(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleJYBS(bool IsChecked);
    
};

