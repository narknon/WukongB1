#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VATAnimMachineConfig.h"
#include "VATAnimMachineInst.generated.h"

class UMaterialInstanceDynamic;
class UVATAnimClipsInfoConfig;

UCLASS(Blueprintable)
class UNREALEXTENT_API AVATAnimMachineInst : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVATAnimClipsInfoConfig* AnimClipsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVATAnimMachineConfig AnimMachineConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugAnimProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindParamLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLerpWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLerpWindIntensity;
    
    AVATAnimMachineInst(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateWindIntensity(float InWindIntensity);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWindDirection(FVector2D InWindDirection);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBlendRatio(float InBlendRatio);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimSpeed(float InPlaySpeed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimProgress(float InAnimProgress);
    
    UFUNCTION(BlueprintCallable)
    void StopVATAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayVATAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitVATAnimMachine();
    
};

