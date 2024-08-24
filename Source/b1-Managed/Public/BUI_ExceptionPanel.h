#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_ExceptionPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ExceptionPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_ExceptionPanel();

    UFUNCTION(BlueprintCallable)
    void OnCloseButtonDown();
    
};

