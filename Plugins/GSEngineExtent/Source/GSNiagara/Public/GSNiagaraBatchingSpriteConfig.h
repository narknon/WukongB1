#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "GSNiagaraBatchingSpriteConfig.generated.h"

class UGSNiagaraBatchingSpriteConfigDA;

UCLASS(Blueprintable, EditInlineNew)
class GSNIAGARA_API UGSNiagaraBatchingSpriteConfig : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSNiagaraBatchingSpriteConfigDA* ConfigInfo;
    
    UGSNiagaraBatchingSpriteConfig();

};

