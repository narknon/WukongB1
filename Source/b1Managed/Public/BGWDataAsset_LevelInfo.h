#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "DetailLevelInfo.h"
#include "LevelIdListInfo.h"
#include "LevelTag.h"
#include "BGWDataAsset_LevelInfo.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_LevelInfo : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetailLevelInfo MainLevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetailLevelInfo LiteLevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<LevelTag, FLevelIdListInfo> LevelTagToLevelIdMap;
    
    UBGWDataAsset_LevelInfo();

};

