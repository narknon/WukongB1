#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Blueprint/UserWidget.h"
#include "GSInputWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGSInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGSInputWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFocusChanging(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable)
    bool IsChildGSWidgetOf(UWidget* PossibleParent);
    
};

