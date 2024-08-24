#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "ChartTheme.h"
#include "LineStyle.h"
#include "Orient.h"
#include "TooltipType.h"
#include "TriggerType.h"
#include "axisLabel.h"
#include "position.h"
#include "ChartBase.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UChartBase : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useDirtyRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ChartTheme Theme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AxisStyleWithTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString title_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool title_show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    position title_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 title_fontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor title_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool legend_show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    position legend_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Orient legend_orient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor legend_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 legend_fontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AxisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool boundaryGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FaxisLabel XaxisLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLineStyle XaxisLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLineStyle XsplitLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FaxisLabel YaxisLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLineStyle YaxisLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLineStyle YsplitLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TooltipType tooltip_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TriggerType tooltip_trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor text_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor tip_backgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool use_custom_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> custom_color;
    
    UChartBase();

    UFUNCTION(BlueprintCallable)
    void UpdateChart();
    
    UFUNCTION(BlueprintCallable)
    void SetYAxisStyle(FaxisLabel Yaxis_Label, FLineStyle Yaxis_Line, FLineStyle Ysplit_Line);
    
    UFUNCTION(BlueprintCallable)
    void SetXAxisStyle(FaxisLabel Xaxis_Label, FLineStyle Xaxis_Line, FLineStyle Xsplit_Line);
    
    UFUNCTION(BlueprintCallable)
    void SetTooltipStyle(TriggerType Trigger, TooltipType ToolTip, FLinearColor TextColor, FLinearColor BackgroundColor);
    
    UFUNCTION(BlueprintCallable)
    void SetTitle(const FString& Text, bool show, position position, int32 FontSize, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetTheme(ChartTheme ChartTheme, bool Axis_Style_With_Theme);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomColor(bool Active, TArray<FColor> NewCustom_color);
    
    UFUNCTION(BlueprintCallable)
    void SetAxis(bool XAxis, TArray<FString> Axis_Data);
    
    UFUNCTION(BlueprintCallable)
    void SetAnim(bool Active);
    
};

