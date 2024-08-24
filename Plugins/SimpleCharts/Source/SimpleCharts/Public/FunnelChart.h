#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "Orient.h"
#include "funnelSeries.h"
#include "position.h"
#include "FunnelChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UFunnelChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FfunnelSeries Series;
    
    UFunnelChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(FfunnelSeries SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

