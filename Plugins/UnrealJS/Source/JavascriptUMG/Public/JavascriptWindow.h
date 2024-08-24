#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "Components/ContentWidget.h"
#include "EJavascriptAutoCenter.h"
#include "EJavascriptSizingRule.h"
#include "EJavascriptWindowTransparency.h"
#include "EJavascriptWindowType.h"
#include "JavascriptWindow.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptWindow : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnWindowWidgetClosed);
    DECLARE_DYNAMIC_DELEGATE(FOnWindowDeactivated);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJavascriptWindowType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDragAnywhere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJavascriptAutoCenter AutoCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ClientSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJavascriptWindowTransparency SupportsTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitiallyMaximized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJavascriptSizingRule SizingRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FocusWhenFirstShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivateWhenFirstShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOSWindowBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupportsMaximize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupportsMinimize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreateTitleBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaneWindowPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin LayoutBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin UserResizeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWindowWidgetClosed OnWindowClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWindowDeactivated OnWindowDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTopmostWindow;
    
    UJavascriptWindow();

    UFUNCTION(BlueprintCallable)
    void ShowWindow();
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(const float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void Resize(FVector2D NewSize);
    
    UFUNCTION(BlueprintCallable)
    void ReshapeWindow(FVector2D NewPosition, FVector2D NewSize);
    
    UFUNCTION(BlueprintCallable)
    void RequestDestroyWindow();
    
    UFUNCTION(BlueprintCallable)
    void MoveWindowTo(FVector2D NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void HideWindow();
    
    UFUNCTION(BlueprintCallable)
    void FlashWindow();
    
    UFUNCTION(BlueprintCallable)
    void EnableWindow(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DestroyWindowImmediately();
    
    UFUNCTION(BlueprintCallable)
    void BringToFront();
    
};

