#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CLSVolumeManager.generated.h"

class ACLSBaseVolume;
class ACLSLightManager;
class ADirectionalLight;
class AExponentialHeightFog;
class ASkyAtmosphere;
class ASkyLight;

UCLASS(Blueprintable, NotPlaceable)
class CUSTOMLIGHTSYSTEM_API ACLSVolumeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACLSBaseVolume*> Volumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACLSLightManager* LightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VolumeManagerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwitchActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCheckWARP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WARPDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForcePPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADirectionalLight* ValidDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyLight* ValidSkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkyAtmosphere* ValidAtmosphericFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* ValidExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACLSBaseVolume* ValidCLSBaseVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACLSBaseVolume* OriginalValidCLSBaseVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACLSBaseVolume* TemplateValidCLSBaseVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACLSBaseVolume* TargetValidCLSBaseVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceUpdateVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeltaWARPDistance;
    
    ACLSVolumeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVolume(FVector position);
    
    UFUNCTION(BlueprintCallable)
    void UpdateProperty();
    
    UFUNCTION(BlueprintCallable)
    void SwitchVolumeProcessParameters(ACLSBaseVolume* TargetVolume) const;
    
    UFUNCTION(BlueprintCallable)
    void SwitchToValidLightAndFog(FVector position);
    
    UFUNCTION(BlueprintCallable)
    void SetLightManagerActive(bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    void RunVolumeProcessParameterCommand(const FString& TargetParameter) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeVolumes(ACLSBaseVolume* InVolume);
    
    UFUNCTION(BlueprintCallable)
    TMap<ACLSBaseVolume*, float> GetValidVolumeByWeight(FVector position);
    
    UFUNCTION(BlueprintCallable)
    void ForceDortPPV(FVector ViewLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CheckValidByWeight(FVector position);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReforenceVolumeListValid();
    
    UFUNCTION(BlueprintCallable)
    TArray<ACLSBaseVolume*> CheckOverlapVolumes(FVector position);
    
};

