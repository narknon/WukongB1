#pragma once
#include "CoreMinimal.h"
#include "SceneItemSurfaceType.h"
#include "BGWDataAsset.h"
#include "TerrainEffectInfo.h"
#include "BGW_TerrainEffectConfig.generated.h"

UCLASS(Blueprintable)
class UBGW_TerrainEffectConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SceneItemSurfaceType, FTerrainEffectInfo> TerrainList;
    
    UBGW_TerrainEffectConfig();

};

