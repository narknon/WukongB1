#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ChangeMaterialByUnitAttrConfig.h"
#include "BGWDataAsset_ChangeMaterialByUnitAttrConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_ChangeMaterialByUnitAttrConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChangeMaterialByUnitAttrConfig> ConfigList;
    
    UBGWDataAsset_ChangeMaterialByUnitAttrConfig();

};

