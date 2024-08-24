#pragma once
#include "CoreMinimal.h"
#include "Components/MultiLineEditableTextBox.h"
#include "JavascriptTextLayout.h"
#include "JavascriptMultiLineEditableTextBox.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptMultiLineEditableTextBox : public UMultiLineEditableTextBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetText, const FString&, InText, const FJavascriptTextLayout&, TextLayout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVScrollBarUserScrolled, float, Offset);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FString, FGetText, const FJavascriptTextLayout&, TextLayout);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVScrollBarUserScrolled OnVScrollBarUserScrolled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetText GetTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetText SetTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowScrollbars;
    
    UJavascriptMultiLineEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void ScrollTo(int32 Line, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    void GoTo(int32 Line, int32 Offset);
    
};

