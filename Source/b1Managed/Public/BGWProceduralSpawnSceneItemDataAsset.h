#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ProceduralSpawnSceneItemConfig.h"
#include "BGWProceduralSpawnSceneItemDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWProceduralSpawnSceneItemDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralSpawnSceneItemConfig ProceduralItemConfig;
    
    UBGWProceduralSpawnSceneItemDataAsset();

};

