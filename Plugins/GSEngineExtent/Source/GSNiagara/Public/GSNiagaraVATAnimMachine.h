#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "GSNiagaraVATAnimMachine.generated.h"

class UVATAnimClipsNiagaraData;

UCLASS(Blueprintable, EditInlineNew)
class GSNIAGARA_API UGSNiagaraVATAnimMachine : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVATAnimClipsNiagaraData* VATNiagaraDataContainer;
    
    UGSNiagaraVATAnimMachine();

};
