#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "MatLayerFunctionInfo.h"
#include "BGWDataAsset_MatLayerFunctionMappingConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_MatLayerFunctionMappingConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMatLayerFunctionInfo> MatLayerFunctionInfoMap;
    
    UBGWDataAsset_MatLayerFunctionMappingConfig();

};

