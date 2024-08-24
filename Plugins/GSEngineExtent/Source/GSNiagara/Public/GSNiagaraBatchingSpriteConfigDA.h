#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GSNiagaraParticleInfoConfig.h"
#include "GSNiagaraParticleSpriteMapping.h"
#include "GSNiagaraBatchingSpriteConfigDA.generated.h"

UCLASS(Blueprintable)
class GSNIAGARA_API UGSNiagaraBatchingSpriteConfigDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AtlasConfigFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AltasTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSNiagaraParticleInfoConfig> ParticleInfoConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSNiagaraParticleSpriteMapping> ParticleSpriteMappingConfig;
    
    UGSNiagaraBatchingSpriteConfigDA();

    UFUNCTION(BlueprintCallable)
    bool InitGSParticlesConfigInfo(bool bForceSet);
    
    UFUNCTION(BlueprintCallable)
    void ClearPaticleConfigData();
    
};

