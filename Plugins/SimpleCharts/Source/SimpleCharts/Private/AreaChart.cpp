#include "AreaChart.h"

UAreaChart::UAreaChart() {
    this->AxisData.AddDefaulted(3);
    this->boundaryGap = false;
    this->Series.AddDefaulted(1);
}

void UAreaChart::SetSeries(TArray<FAreaSeries> SeriesData) {
}

void UAreaChart::SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize) {
}


