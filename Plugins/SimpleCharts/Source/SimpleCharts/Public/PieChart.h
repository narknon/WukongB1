#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "Orient.h"
#include "PieSeries.h"
#include "position.h"
#include "PieChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UPieChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieSeries Series;
    
    UPieChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(FPieSeries SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

