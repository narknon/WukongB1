#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GSE_WWiseParticleAsset.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class GSENGINEEXTENT_API UGSE_WWiseParticleAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UGSE_WWiseParticleAsset();

};

