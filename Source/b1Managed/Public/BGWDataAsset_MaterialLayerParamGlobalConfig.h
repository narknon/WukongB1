#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "MaterialLayerKeyData.h"
#include "MaterialLayerParamGlobalConfigData.h"
#include "BGWDataAsset_MaterialLayerParamGlobalConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_MaterialLayerParamGlobalConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMaterialLayerKeyData, FMaterialLayerParamGlobalConfigData> ConfigList;
    
    UBGWDataAsset_MaterialLayerParamGlobalConfig();

};

