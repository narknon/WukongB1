#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "UltimateSkillConfigInfo.h"
#include "BGWUltimateInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWUltimateInfoDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUltimateSkillConfigInfo> UltimateSkillConfigInfo;
    
    UBGWUltimateInfoDataAsset();

};

