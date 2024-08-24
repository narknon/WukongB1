#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWLevelStreamingVolumeArr.h"
#include "BGWVisibleLevelStreamingSettings.h"
#include "GSStreamingLevelLoadSetting.h"
#include "BGWLevelStreamingVolumeManager.generated.h"

class UBGWTileLevelGroup;
class ULevelStreaming;

UCLASS(Blueprintable)
class B1_API UBGWLevelStreamingVolumeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FBGWLevelStreamingVolumeArr> LevelStreamingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FBGWLevelStreamingVolumeArr> ForceHideLevelStreamingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UBGWTileLevelGroup*> TileLevelStreamingGroupWithKeyWords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UBGWTileLevelGroup*> ForceHideGroupWithKeyWords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> DisabledDistanceStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LevelStreamingObjectsWithVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ULevelStreaming*> LevelStreamingObjectsWithVolumesOtherThanBlockingLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ULevelStreaming*, FGSStreamingLevelLoadSetting> StatusChangedStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FBGWVisibleLevelStreamingSettings> LevelStreamingWhiteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> LevelStreamingBlackList;
    
public:
    UBGWLevelStreamingVolumeManager();

};

