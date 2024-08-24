#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "BUI_Widget.h"
#include "BUI_LoadingScreenPreview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_LoadingScreenPreview : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_LoadingScreenPreview();

private:
    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(FText Text, ETextCommit::Type CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionChanged(const FString& SelectedItem, ESelectInfo::Type SelectionType);
    
};

