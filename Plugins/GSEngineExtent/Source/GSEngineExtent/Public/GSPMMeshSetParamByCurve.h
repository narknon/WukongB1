#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "GSPMBase.h"
#include "GSPMMeshSetParamByCurve.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSENGINEEXTENT_API UGSPMMeshSetParamByCurve : public UGSPMBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshMaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkelMeshActorParamName;
    
    UGSPMMeshSetParamByCurve();

};

