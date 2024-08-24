#include "ChartBase.h"

UChartBase::UChartBase() {
    this->useDirtyRect = true;
    this->Theme = ChartTheme::azul;
    this->AxisStyleWithTheme = false;
    this->title_text = TEXT("title");
    this->title_show = true;
    this->title_position = position::center;
    this->title_fontSize = 12;
    this->legend_show = true;
    this->legend_position = position::left;
    this->legend_orient = Orient::horizontal;
    this->legend_fontSize = 12;
    this->AxisData.AddDefaulted(3);
    this->IsXAxis = true;
    this->boundaryGap = true;
    this->tooltip_type = TooltipType::line;
    this->tooltip_trigger = TriggerType::item;
    this->use_custom_color = false;
}

void UChartBase::UpdateChart() {
}

void UChartBase::SetYAxisStyle(FaxisLabel Yaxis_Label, FLineStyle Yaxis_Line, FLineStyle Ysplit_Line) {
}

void UChartBase::SetXAxisStyle(FaxisLabel Xaxis_Label, FLineStyle Xaxis_Line, FLineStyle Xsplit_Line) {
}

void UChartBase::SetTooltipStyle(TriggerType Trigger, TooltipType ToolTip, FLinearColor TextColor, FLinearColor BackgroundColor) {
}

void UChartBase::SetTitle(const FString& Text, bool show, position position, int32 FontSize, FLinearColor Color) {
}

void UChartBase::SetTheme(ChartTheme ChartTheme, bool Axis_Style_With_Theme) {
}

void UChartBase::SetCustomColor(bool Active, TArray<FColor> NewCustom_color) {
}

void UChartBase::SetAxis(bool XAxis, TArray<FString> Axis_Data) {
}

void UChartBase::SetAnim(bool Active) {
}


