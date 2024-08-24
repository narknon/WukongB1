#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_GMDIYPanel.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMDIYPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CmdGroupTemp;
    
    UBUI_GMDIYPanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickDoSaveCmds();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoReturnCmdList();
    
};

