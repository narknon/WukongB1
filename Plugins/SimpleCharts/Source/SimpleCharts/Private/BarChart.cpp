#include "BarChart.h"

UBarChart::UBarChart() {
    this->AxisData.AddDefaulted(3);
    this->Series.AddDefaulted(1);
}

void UBarChart::SetSeries(TArray<FBarSeries> SeriesData) {
}

void UBarChart::SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize) {
}


