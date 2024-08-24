#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "AutoMoveMonitorConfigItem.h"
#include "BGWDataAsset_AutoMoveMonitorsConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_AutoMoveMonitorsConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoMoveMonitorConfigItem> AutoMoveCaptureModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoMoveMonitorConfigItem> AutoMoveMotionPatterns;
    
    UBGWDataAsset_AutoMoveMonitorsConfig();

};

