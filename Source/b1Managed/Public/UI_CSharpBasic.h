#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "UI_CSharpBasic.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUI_CSharpBasic : public UBUI_Widget {
    GENERATED_BODY()
public:
    UUI_CSharpBasic();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

