#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BulletSkillTestInfo.h"
#include "BGWDataAsset_TamerAndBulletSkillIDConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_TamerAndBulletSkillIDConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBulletSkillTestInfo> BulletSkillTestInfos;
    
    UBGWDataAsset_TamerAndBulletSkillIDConfig();

};

