#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_SkillIDBlackListConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_SkillIDBlackListConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillList;
    
    UBGWDataAsset_SkillIDBlackListConfig();

};

