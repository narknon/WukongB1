#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "Orient.h"
#include "Radar.h"
#include "RadarSeries.h"
#include "position.h"
#include "RadarChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API URadarChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarSeries Series;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadar Radar;
    
    URadarChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(FRadarSeries SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetRadar(FRadar RadarData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

