#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_NiagaraParamColPreload.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_NiagaraParamColPreload : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Paths;
    
    UBGWDataAsset_NiagaraParamColPreload();

};

