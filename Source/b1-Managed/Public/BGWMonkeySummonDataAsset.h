#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "SummonBehaviorState.h"
#include "SummonSpawnQuene.h"
#include "BGWMonkeySummonDataAsset.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class UBGWMonkeySummonDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSummonSpawnQuene> SummonSpawnPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SummonBehaviorState, UBehaviorTree*> MapSummonSateBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SummonBehaviorState DefauleSummonBehaviorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSpawnPointAwayFromNavMesh: 1;
    
    UBGWMonkeySummonDataAsset();

};

