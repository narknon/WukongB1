#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BGWDataAsset.h"
#include "BattleSCInfo.h"
#include "BGWDataAsset_BattleSCConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_BattleSCConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBattleSCInfo> BattleSCConfigMap;
    
    UBGWDataAsset_BattleSCConfig();

};

