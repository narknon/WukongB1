#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BUI_AnimWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_AnimWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBUI_AnimWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAnimationSequenceEvent(int32 Param);
    
};

