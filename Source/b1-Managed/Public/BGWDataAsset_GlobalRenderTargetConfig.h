#pragma once
#include "CoreMinimal.h"
#include "SceneItemSurfaceType.h"
#include "BGWDataAsset.h"
#include "CanvasPainterData.h"
#include "BGWDataAsset_GlobalRenderTargetConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_GlobalRenderTargetConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SceneItemSurfaceType, FCanvasPainterData> CanvasPainterMap;
    
    UBGWDataAsset_GlobalRenderTargetConfig();

};

