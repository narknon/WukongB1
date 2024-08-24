#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "GSPMSizeScaleKeep.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSENGINEEXTENT_API UGSPMSizeScaleKeep : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysKeepWorldScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RefScaleSocketNameInMesh;
    
    UGSPMSizeScaleKeep();

};

