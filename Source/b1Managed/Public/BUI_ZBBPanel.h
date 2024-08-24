#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "BUI_Widget.h"
#include "BUI_ZBBPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ZBBPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_ZBBPanel();

private:
    UFUNCTION(BlueprintCallable)
    void ShowZBBInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateReport(const FString& SelectedItem, ESelectInfo::Type SelectionType);
    
};

