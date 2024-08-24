#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AreaSeries.h"
#include "ChartBase.h"
#include "Orient.h"
#include "position.h"
#include "AreaChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UAreaChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaSeries> Series;
    
    UAreaChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(TArray<FAreaSeries> SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

