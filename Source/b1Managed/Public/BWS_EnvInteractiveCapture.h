#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BWS_EnvInteractiveCapture.generated.h"

class UGSNiagaraArrayData;
class UMaterialParameterCollection;
class UPrimitiveComponent;
class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ABWS_EnvInteractiveCapture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSNiagaraArrayData* ParticleArrayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RTSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CaptureMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParicleHeight;
    
    ABWS_EnvInteractiveCapture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLateInit();
    
    UFUNCTION(BlueprintCallable)
    int32 TriggerOnce(FVector position, FVector Size, int32 InteractiveType, float Intensity, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnableDebug();
    
    UFUNCTION(BlueprintCallable)
    void OnTickCapture();
    
    UFUNCTION(BlueprintCallable)
    int32 AddInteractor(UPrimitiveComponent* PrimComp, int32 InteractiveType, FVector Size, float Intensity, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInteractor(int32 InteractorID);
    
};

