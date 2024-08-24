#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWVolumeManager.generated.h"

class UBGWActorVisibilityVolumeManager;
class UBGWCameraGroupVolumeManager;
class UBGWLevelStreamingStateVolumeManager;
class UBGWLevelStreamingVolumeManager;

UCLASS(Blueprintable)
class B1_API UBGWVolumeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBGWLevelStreamingVolumeManager* LevelSteamingVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBGWActorVisibilityVolumeManager* ActorVisibilityVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBGWCameraGroupVolumeManager* CameraGroupVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBGWLevelStreamingStateVolumeManager* LevelStreamingStateVolumeManager;
    
    UBGWVolumeManager();

    UFUNCTION(BlueprintCallable)
    void OnGSLevelStateChanged(int32 ActionID, int32 Linkage);
    
};

