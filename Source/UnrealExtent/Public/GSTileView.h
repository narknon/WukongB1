#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Views/STableViewBase.h"
#include "Types/SlateEnums.h"
#include "Components/ListView.h"
#include "Templates/SubclassOf.h"
#include "GSTileView.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UGSTileView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EListItemAlignment TileAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopSpacerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BottomSpacerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapHorizontalNavigation;
    
public:
    UGSTileView();

    UFUNCTION(BlueprintCallable)
    void SetTopSpacerSize(float InTopSpacerSize);
    
    UFUNCTION(BlueprintCallable)
    void SetTopItemPosList(TArray<float> InChildsPosList);
    
    UFUNCTION(BlueprintCallable)
    void SetTileAlignment(EListItemAlignment InTileAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetShowScrollBar(bool InShowScrollBar);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(TEnumAsByte<EOrientation> InOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetItemWidget(TSubclassOf<UUserWidget> InItemWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetForceNeedTopSpacer(bool InForceNeedTopSpacer);
    
    UFUNCTION(BlueprintCallable)
    void SetForceNeedBottomSpacer(bool InForceNeedBottomSpacer);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryWidth(float NewWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHeight(float NewHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBottomSpacerSize(float InBottomSpacerSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBottomItemPosList(TArray<float> InChildsPosList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewWidgetSizeChangedEvent(FVector2D Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryWidgetReleasedEvent(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryWidgetGeneratedEvent(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryInitializedEvent(UObject* Item, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemScrolledIntoViewEvent(UObject* Item, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void InsertTopScrollWidget(UUserWidget* WidgetToInset);
    
    UFUNCTION(BlueprintCallable)
    void InsertBottomScrollWidget(UUserWidget* WidgetToInset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopSpacerSize() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFirstLine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntryWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntryHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBottomSpacerSize() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTopScrollWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ClearBottomScrollWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllWidget();
    
    UFUNCTION(BlueprintCallable)
    void AddTopScrollWidget(UUserWidget* WidgetToAppend);
    
    UFUNCTION(BlueprintCallable)
    void AddBottomScrollWidget(UUserWidget* WidgetToAppend);
    
};

