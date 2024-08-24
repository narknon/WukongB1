#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BarSeries.h"
#include "ChartBase.h"
#include "Orient.h"
#include "position.h"
#include "BarChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UBarChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBarSeries> Series;
    
    UBarChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(TArray<FBarSeries> SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

