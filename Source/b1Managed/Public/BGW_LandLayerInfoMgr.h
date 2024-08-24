#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_LandLayerInfoMgr.generated.h"

class ALayerSceneInfo;

UCLASS(Blueprintable)
class UBGW_LandLayerInfoMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALayerSceneInfo* LayerSceneInfoActor;
    
public:
    UBGW_LandLayerInfoMgr();

};

