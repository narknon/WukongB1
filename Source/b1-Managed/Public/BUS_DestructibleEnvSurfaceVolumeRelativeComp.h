#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BUS_DestructibleEnvSurfaceVolumeRelativeComp.generated.h"

class ABGWEnvironmentSurfaceVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DestructibleEnvSurfaceVolumeRelativeComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>> RelativeEnvironmentSurfaceVolumes;
    
    UBUS_DestructibleEnvSurfaceVolumeRelativeComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

