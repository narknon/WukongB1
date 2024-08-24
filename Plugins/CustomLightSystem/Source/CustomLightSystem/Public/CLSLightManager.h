#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLSMaterialParametersCollectionProperty.h"
#include "CLSLightManager.generated.h"

class ACLSVolumeManager;
class ADirectionalLight;
class AExponentialHeightFog;
class ASkyAtmosphere;
class ASkyLight;
class UCLSTagComponent;
class UMaterialParameterCollection;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSLightManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACLSVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightManagerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADirectionalLight*> DirectionalLightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyLight*> SkyLightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyAtmosphere*> AtmosphericFogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AExponentialHeightFog*> ExponentialHeightFogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwitchActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAllActorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADirectionalLight* TargetDLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLight* DLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyLight* TargetSLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyLight* SLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyAtmosphere* TargetAFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyAtmosphere* AFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* TargetEHFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* EHFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADirectionalLight* OriginalDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyLight* OriginalSkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyAtmosphere* OriginalAtmosphericFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* OriginalExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OriginalVloumePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADirectionalLight* TargetDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyLight* TargetSkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyAtmosphere* TargetAtmosphericFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* TargetExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCLSMaterialParametersCollectionProperty TargetCLSVolumeMPCProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCLSMaterialParametersCollectionProperty OriginalCLSVolumeMPCProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetVolumePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickTargetVolumePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOriginlaVolumeChanged;
    
    ACLSLightManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncLightsAndFogs(ADirectionalLight* InTargetDirectionalLight, ASkyLight* InTargetSkyLight, ASkyAtmosphere* InTargetAtmosphericFog, AExponentialHeightFog* InTargetExponentialHeightFog, FCLSMaterialParametersCollectionProperty InTargetCLSVolumeMPCProperty, FCLSMaterialParametersCollectionProperty InOriginalCLSVolumeMPCProperty, float InTargetVolumePercentage, bool ForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchSkyLight(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SwitchLightAndFog(float Percentage);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchExponentialHeightFog(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchDirectionalLight(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchAtmosphericFog(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchAllLightAndFog(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetLightManagerActive(bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeTagActor(UCLSTagComponent* TagComponent);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateTagComponents();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableAllActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckReforenceListValid();
    
};

