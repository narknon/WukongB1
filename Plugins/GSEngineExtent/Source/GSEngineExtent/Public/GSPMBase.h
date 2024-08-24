#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "GSPMBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSENGINEEXTENT_API UGSPMBase : public UParticleModule {
    GENERATED_BODY()
public:
    UGSPMBase();

};

