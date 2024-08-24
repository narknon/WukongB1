#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "EDPSCalTimeType.h"
#include "EGSTrainDummyHPType.h"
#include "TrainDummySpecialDamageTypeConfig.h"
#include "BGWDataAsset_TrainDummyConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_TrainDummyConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSTrainDummyHPType TrainDummyHPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrainDummyHPValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedCloseTrainDummyAI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDPSCalTimeType DPSCalTimeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DPSCalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrainDummySpecialDamageTypeConfig> SpecialDamageTypeConfigList;
    
    UBGWDataAsset_TrainDummyConfig();

};

