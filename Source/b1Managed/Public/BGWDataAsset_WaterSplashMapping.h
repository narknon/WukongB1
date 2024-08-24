#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "WaterSplashResourceMap_WithSurfaceType.h"
#include "BGWDataAsset_WaterSplashMapping.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_WaterSplashMapping : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName_PostAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioFadeOutTime_Ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FWaterSplashResourceMap_WithSurfaceType> ResourceMap;
    
    UBGWDataAsset_WaterSplashMapping();

};

