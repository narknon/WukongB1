#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "StopEventConditionConfig.h"
#include "BGWDataAsset_SetUnitBattleBGM.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UBGWDataAsset_SetUnitBattleBGM : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEventBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEventStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BGMEventStopTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopEventConditionConfig StopEventConditionConfig;
    
    UBGWDataAsset_SetUnitBattleBGM();

};

