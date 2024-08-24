#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLSMaterialParametersCollectionProperty.h"
#include "CLSCommandManager.generated.h"

class ACLSLightManager;
class ACLSVolumeManager;
class ADirectionalLight;
class AExponentialHeightFog;
class ASkyAtmosphere;
class ASkyLight;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSCommandManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACLSLightManager* LightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACLSVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandManagerID;
    
    ACLSCommandManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchLightsAndFogs(ADirectionalLight* InTargetDirectionalLight, ASkyLight* InTargetSkyLight, ASkyAtmosphere* InTargetAtmosphericFog, AExponentialHeightFog* InTargetExponentialHeightFog, FCLSMaterialParametersCollectionProperty InTargetCLSVolumeMPCProperty, FCLSMaterialParametersCollectionProperty InOriginalCLSVolumeMPCProperty, float InTargetVolumePercentage, bool ForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SafelySwitchLightsAndFogs(ADirectionalLight* InTargetDirectionalLight, ASkyLight* InTargetSkyLight, ASkyAtmosphere* InTargetAtmosphericFog, AExponentialHeightFog* InTargetExponentialHeightFog, FCLSMaterialParametersCollectionProperty InTargetCLSVolumeMPCProperty, FCLSMaterialParametersCollectionProperty InOriginalCLSVolumeMPCProperty, float InTargetVolumePercentage, bool ForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ReactiveAnotherManager();
    
    UFUNCTION(BlueprintCallable)
    void InterruptAnotherManager();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCommandManager();
    
};

