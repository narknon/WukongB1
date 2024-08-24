#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BlockAMSelectMode.h"
#include "BlockCounterType.h"
#include "BlockInfoWarp_BeAttacked.h"
#include "BlockInfoWarp_Normal.h"
#include "BlockInfoWarp_Perfect.h"
#include "BGWDataAsset_BlockInfoConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_BlockInfoConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    BlockCounterType BlockCounterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    BlockAMSelectMode BlockAMSelectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockTiggerAngleLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockTiggerAngleRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaDivisionLineForwardLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaDivisionLineForwardRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaDivisionLineBackwardLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaDivisionLineBackwardRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockInfoWarp_Perfect PerfectBlockInfoWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockInfoWarp_Normal NormalBlockInfoWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockInfoWarp_BeAttacked BeAttackedBlockInfoWarp;
    
    UBGWDataAsset_BlockInfoConfig();

};

