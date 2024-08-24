#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "AnimHumanoidSetting_Spider.h"
#include "BGWDataAsset_SpiderSetting.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_SpiderSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_Spider SpiderSetting;
    
    UBGWDataAsset_SpiderSetting();

};

