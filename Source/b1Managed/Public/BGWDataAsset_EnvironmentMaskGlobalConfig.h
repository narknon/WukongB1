#pragma once
#include "CoreMinimal.h"
#include "SceneItemSurfaceType.h"
#include "BGWDataAsset.h"
#include "EnvironmentMaskMappingData.h"
#include "BGWDataAsset_EnvironmentMaskGlobalConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_EnvironmentMaskGlobalConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SceneItemSurfaceType, FEnvironmentMaskMappingData> EnvironmentMaskMappingList;
    
    UBGWDataAsset_EnvironmentMaskGlobalConfig();

};

