#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSTileView.h"
#include "GSTileViewPanel.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UGSTileViewPanel : public UGSTileView {
    GENERATED_BODY()
public:
    UGSTileViewPanel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEntryInitializedEvent(UObject* Item, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemScrolledIntoViewEvent(UObject* Item, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEntryWidgetReleasedEvent(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEntryWidgetGeneratedEvent(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnViewWidgetSizeChangedEvent(FVector2D Size);
    
};

