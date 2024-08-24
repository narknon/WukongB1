#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GM_OP_Editable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GM_OP_Editable : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GM_OP_Editable();

    UFUNCTION(BlueprintCallable)
    void OnClickChangeValue();
    
};

