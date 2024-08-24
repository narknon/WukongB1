#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "TamerStrategyPreDefinesForLevelOverride.h"
#include "BGWTamerSettingConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWTamerSettingConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTamerStrategyPreDefinesForLevelOverride TamerStrategyPreDefinesForLevelOverride;
    
    UBGWTamerSettingConfigDataAsset();

};

