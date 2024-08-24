#pragma once
#include "CoreMinimal.h"
#include "GSNiagaraParticleSpriteMapping.generated.h"

USTRUCT(BlueprintType)
struct FGSNiagaraParticleSpriteMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpriteIndex;
    
    GSNIAGARA_API FGSNiagaraParticleSpriteMapping();
};

