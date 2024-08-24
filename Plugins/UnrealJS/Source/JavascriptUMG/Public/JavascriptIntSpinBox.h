#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "JavascriptIntSpinBox.generated.h"

class USlateWidgetStyleAsset;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptIntSpinBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpinBoxValueCommittedEvent, int32, InValue, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpinBoxValueChangedEvent, int32, InValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpinBoxBeginSliderMovement);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetInt32 ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SliderExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectAllTextOnCommit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxValueChangedEvent OnValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxValueCommittedEvent OnValueCommitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxBeginSliderMovement OnBeginSliderMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxValueChangedEvent OnEndSliderMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MinValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MaxValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MinSliderValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MaxSliderValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSliderValue;
    
public:
    UJavascriptIntSpinBox();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSliderValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSliderValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForegroundColor(FSlateColor InForegroundColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSliderValue() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMinValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinSliderValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxSliderValue();
    
};

