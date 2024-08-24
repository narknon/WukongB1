#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGW_DispLibUniversalArtFresnelCacheDataAsset.generated.h"

class UBUC_DispLibUnitArtFresnelDataAsset;

UCLASS(Blueprintable)
class UBGW_DispLibUniversalArtFresnelCacheDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBUC_DispLibUnitArtFresnelDataAsset*> UnitArtFresnelUniversalData;
    
    UBGW_DispLibUniversalArtFresnelCacheDataAsset();

};

