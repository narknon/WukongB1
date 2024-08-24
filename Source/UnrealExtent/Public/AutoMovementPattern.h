#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AutoMovementHeatmapConfig.h"
#include "AutoMovementViewingPattern.h"
#include "AutoMovementPattern.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UAutoMovementPattern : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoMovementViewingPattern ViewingPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoMovementHeatmapConfig HeatmapConfig;
    
    UAutoMovementPattern();

};

