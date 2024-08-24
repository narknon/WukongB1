#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "FNPCIdleAnimInfo.h"
#include "FNPCLeisureAnimInfo.h"
#include "BGWDataAsset_NPCAnimInfoConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_NPCAnimInfoConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFNPCIdleAnimInfo> IdleAnimInfoDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFNPCLeisureAnimInfo> LeisureAnimInfoDic;
    
    UBGWDataAsset_NPCAnimInfoConfig();

};

