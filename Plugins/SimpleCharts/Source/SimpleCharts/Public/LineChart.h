#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "LineSeries.h"
#include "Orient.h"
#include "position.h"
#include "LineChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API ULineChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineSeries> Series;
    
    ULineChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(TArray<FLineSeries> SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

