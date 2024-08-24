#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_HatredBattleConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_HatredBattleConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HatredBattleBlackList;
    
    UBGWDataAsset_HatredBattleConfig();

};

