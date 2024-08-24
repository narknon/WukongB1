#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "Orient.h"
#include "ScatterSeries.h"
#include "position.h"
#include "ScatterChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UScatterChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScatterSeries> Series;
    
    UScatterChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(TArray<FScatterSeries> SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

