#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/PanelWidget.h"
#include "OnGSUserScrolledEventDelegate.h"
#include "GSScrollBox.generated.h"

class USlateWidgetStyleAsset;
class UWidget;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSScrollBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle WidgetBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* BarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScrollbarThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ScrollbarPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbarTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NavCanLoop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSUserScrolledEvent OnUserScrolled;
    
    UGSScrollBox();

    UFUNCTION(BlueprintCallable)
    void SetTopSpacer(float InTopSpacer);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetScrollOffset(float InTargetScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(float InScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarPadding(const FMargin& NewScrollbarPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationScrollPadding(const float NewNavigationScrollPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationDestination(const EDescendantScrollDestination NewNavigationDestination);
    
    UFUNCTION(BlueprintCallable)
    void SetNavCanLoop(bool InNavCanLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetBottomSpacer(float InBottomSpacer);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewOffsetFraction() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTopSpacer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffsetOfEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollContentWithOutSpacer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollContent() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBottomSpacer();
    
};

