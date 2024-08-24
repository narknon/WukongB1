#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Sound/SlateSound.h"
#include "Styling/SlateTypes.h"
#include "JavascriptStyleSet.h"
#include "JavascriptStyleSetLibrary.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptStyleSetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor SlateColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SlateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextStyle EditableTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle CheckBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboBoxStyle ComboBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboButtonStyle ComboButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle ProgressBarStyle;
    
    UJavascriptStyleSetLibrary();

    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FTextBlockStyle GetTextBlockStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FSlateSound GetSound(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FSlateColor GetSlateColor(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FProgressBarStyle GetProgressBarStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FMargin GetMargin(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FSlateFontInfo GetFontStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloat(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FEditableTextStyle GetEditableTextStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FEditableTextBoxStyle GetEditableTextBoxStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FComboButtonStyle GetComboButtonStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FComboBoxStyle GetComboBoxStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetColor(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FCheckBoxStyle GetCheckBoxStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FButtonStyle GetButtonStyle(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetBrush(const FJavascriptStyleSet& Handle, const FName& StyleName);
    
};

