#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartBase.h"
#include "Orient.h"
#include "SankeySeries.h"
#include "position.h"
#include "SankeyChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API USankeyChart : public UChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSankeySeries Series;
    
    USankeyChart();

    UFUNCTION(BlueprintCallable)
    void SetSeries(FSankeySeries SeriesData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegend(bool show, position position, Orient Orient, FLinearColor Color, int32 FontSize);
    
};

