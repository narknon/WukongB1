#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "StatInfoThreshold.h"
#include "StatUISimulatedGraphicsCardScaleFactor.h"
#include "StatGroupInfoThresholdConfig.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UStatGroupInfoThresholdConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatUISimulatedGraphicsCardScaleFactor> SimulatedGraphicsCardConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatInfoThreshold> ThresholdConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_Severe;
    
    UStatGroupInfoThresholdConfig();

};

