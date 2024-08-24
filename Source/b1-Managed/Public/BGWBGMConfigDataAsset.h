#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "EBGMDisableType.h"
#include "SingleBGMConfig.h"
#include "SingleBattleBGMConfig.h"
#include "BGWBGMConfigDataAsset.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UBGWBGMConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSingleBGMConfig> DefaultWanderBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSingleBattleBGMConfig> DefaultMonsterBattleBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSingleBattleBGMConfig> DefaultEliteBattleBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSingleBattleBGMConfig> DefaultBossBattleBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultSequenceStopBGMEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleBGMConfig DefaultShrineBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleBGMConfig DefaultRoleBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBGMDisableType> DisabledBGMTypes;
    
    UBGWBGMConfigDataAsset();

};

