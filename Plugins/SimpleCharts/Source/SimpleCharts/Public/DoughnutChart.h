#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "DoughnutSeries.h"
#include "Orient.h"
#include "position.h"
#include "DoughnutChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UDoughnutChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoughnutSeries Series;
    
    UDoughnutChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(FDoughnutSeries SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

