#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "LineBarSeries.h"
#include "Orient.h"
#include "position.h"
#include "LineBarChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API ULineBarChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineBarSeries> Series;
    
    ULineBarChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(TArray<FLineBarSeries> SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

