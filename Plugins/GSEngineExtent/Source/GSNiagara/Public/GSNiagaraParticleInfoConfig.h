#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSNiagaraParticleInfoConfig.generated.h"

USTRUCT(BlueprintType)
struct FGSNiagaraParticleInfoConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParticleLifetimeLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ParticleSpriteSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ParticleSpriteOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParticleConfigRemark;
    
    GSNIAGARA_API FGSNiagaraParticleInfoConfig();
};

