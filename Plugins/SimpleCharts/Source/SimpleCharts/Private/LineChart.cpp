#include "LineChart.h"

ULineChart::ULineChart() {
    this->AxisData.AddDefaulted(3);
    this->Series.AddDefaulted(1);
}

void ULineChart::SetSeries(TArray<FLineSeries> SeriesData) {
}

void ULineChart::SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize) {
}


