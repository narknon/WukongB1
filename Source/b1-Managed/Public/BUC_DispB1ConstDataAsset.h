#pragma once
#include "CoreMinimal.h"
#include "BGW_DispLibConstDataAsset.h"
#include "BUC_DispB1ConstDataAsset.generated.h"

UCLASS(Blueprintable)
class UBUC_DispB1ConstDataAsset : public UBGW_DispLibConstDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DBCDefaultCamOffset;
    
    UBUC_DispB1ConstDataAsset();

};

