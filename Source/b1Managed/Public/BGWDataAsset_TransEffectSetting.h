#pragma once
#include "CoreMinimal.h"
#include "GSNiagaraSysParam.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_TransEffectSetting.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UBGWDataAsset_TransEffectSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TransEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSNiagaraSysParam> NiagaraParams;
    
    UBGWDataAsset_TransEffectSetting();

};

