#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "GaugeSeries.h"
#include "Orient.h"
#include "position.h"
#include "GaugeChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UGaugeChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGaugeSeries Series;
    
    UGaugeChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(FGaugeSeries SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

