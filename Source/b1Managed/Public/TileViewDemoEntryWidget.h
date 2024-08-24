#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JavascriptUserObjectListEntry.h"
#include "TileViewDemoEntryWidget.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UTileViewDemoEntryWidget : public UJavascriptUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultTexture;
    
    UTileViewDemoEntryWidget();

    UFUNCTION(BlueprintCallable)
    void OnListItemObjectSetCallback(UObject* ListItemObject);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSelectionChangedCallback(bool IsSelected);
    
};

