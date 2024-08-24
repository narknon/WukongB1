#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "FBGMVolumeConditionConfig.h"
#include "FBGMVolumeGroupConfig.h"
#include "BUS_WanderBGMAreaConfigComp.generated.h"

class UAkAudioEvent;
class UBGWBGMConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_WanderBGMAreaConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEventBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEventStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWBGMConfigDataAsset* VolumeBGMConfigDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFBGMVolumeGroupConfig VolumeGroupConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFBGMVolumeConditionConfig> VolumeConditionConfigs;
    
    UBUS_WanderBGMAreaConfigComp(const FObjectInitializer& ObjectInitializer);

};

