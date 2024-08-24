#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "FPEConfig.h"
#include "BGWDataAsset_PELevelConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_PELevelConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFPEConfig> Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PELimit_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PELimit_ByChargeSkill;
    
    UBGWDataAsset_PELevelConfig();

};

