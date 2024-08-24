#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JavascriptUserObjectListEntry.h"
#include "ListViewDemoEntryWidget.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UListViewDemoEntryWidget : public UJavascriptUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UListViewDemoEntryWidget();

    UFUNCTION(BlueprintCallable)
    void OnListItemObjectSetCallback(UObject* ListItemObject);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSelectionChangedCallback(bool IsSelected);
    
};

