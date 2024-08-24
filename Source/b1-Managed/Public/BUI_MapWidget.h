#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_MapWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_MapWidget : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_MapWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Construct();
    
};

