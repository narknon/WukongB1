#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Slate/WidgetTransform.h"
#include "BUI_Widget.h"
#include "BUI_BarCSharp.generated.h"

class UClass;
class UNamedSlot;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_BarCSharp : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurMaxValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin FrameInitPadding;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IS_SHOW_U_INTER_TOTAL_NUM: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IS_SHOW_BAR_VALUE_NUM: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CONF_INTER_PLAY_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CONF_INTER_TIME_COUNT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform FloatingTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FloatingImageBrush;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UninterruptMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* FloatBarCls;
    
public:
    UBUI_BarCSharp();

    UFUNCTION(BlueprintCallable)
    void ValueDecrease(float DecreaseValueIn);
    
    UFUNCTION(BlueprintCallable)
    void ValueIncrease(float IncreaseValueIn);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaxValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void BarChangeValue(float ChangeValue);
    
private:
    UFUNCTION(BlueprintCallable)
    float CalcCurBarLength();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBarByValue(UNamedSlot* inBarSlot, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBarByLength(UWidget* InBarWidget, float InBarLength);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurMaxValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void UninterruptDecrease(float DecreaseValueIn);
    
    UFUNCTION(BlueprintCallable)
    float CalcBarLengthByValue(float InValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitSetCurAndMaxValue(float InMaxValue, float InCurValue, bool InIsReCalcMaxLen);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateBarWithCurLength(UNamedSlot* inBarSlot);
    
    UFUNCTION(BlueprintCallable)
    void PlayUninterruptBarAnimation();
    
};

