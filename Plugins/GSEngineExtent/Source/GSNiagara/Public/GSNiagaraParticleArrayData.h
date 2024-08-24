#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "GSNiagaraParticleArrayData.generated.h"

class UGSNiagaraArrayData;

UCLASS(Blueprintable, EditInlineNew)
class GSNIAGARA_API UGSNiagaraParticleArrayData : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    DECLARE_NIAGARA_DI_PARAMETER();
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSNiagaraArrayData* ArrayData;
    
    UGSNiagaraParticleArrayData();

};

