#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GM_OP_DIY.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GM_OP_DIY : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GM_OP_DIY();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickDoCmds();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoSave();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoDelete();
    
};

