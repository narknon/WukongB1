#pragma once
#include "CoreMinimal.h"
#include "BGWVolumeManagerBase.h"
#include "BGWCameraGroupVolumeManager.generated.h"

class ABGWCameraGroupVolume;
class APlayerController;
class UBGWCameraGroupVolumeManager;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGWCameraGroupVolumeManager : public UBGWVolumeManagerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSwitchCameraGroupTo, int32, TargetCameraGroupId, float, alpha, float, BlendTime);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchCameraGroupTo OnSwitchCameraGroupTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCameraGroupManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TickIntervalMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastFrameTargetGroupId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGWCameraGroupVolume* TargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFrameAlpha;
    
public:
    UBGWCameraGroupVolumeManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UBGWCameraGroupVolumeManager* Get(UObject* WorldContext);
    
};

