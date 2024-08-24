#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_PhantomRushRelatedeSkillConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_PhantomRushRelatedeSkillConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PhantomRushAtkSkill;
    
    UBGWDataAsset_PhantomRushRelatedeSkillConfig();

};

