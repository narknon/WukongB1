#include "LineBarChart.h"

ULineBarChart::ULineBarChart() {
    this->AxisData.AddDefaulted(3);
    this->Series.AddDefaulted(2);
}

void ULineBarChart::SetSeries(TArray<FLineBarSeries> SeriesData) {
}

void ULineBarChart::SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize) {
}


