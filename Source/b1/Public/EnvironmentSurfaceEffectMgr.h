#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EWeatherType.h"
#include "EnvironmentSurfaceEffectMgr.generated.h"

class ABGWEnvironmentSurfaceVolume;

UCLASS(Blueprintable)
class B1_API AEnvironmentSurfaceEffectMgr : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultEnvironmentSurfaceEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeatherType WeatherType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>> RegisteredVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>> DisabledVolumes;
    
public:
    AEnvironmentSurfaceEffectMgr(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterVolume(const TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>& InVolume, bool IsDisableVolume);
    
    UFUNCTION(BlueprintCallable)
    void RegisterVolume(const TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>& InVolume);
    
    UFUNCTION(BlueprintCallable)
    ABGWEnvironmentSurfaceVolume* GetEnvironmentSurfaceVolumeByLocation(const FVector& Location);
    
};

