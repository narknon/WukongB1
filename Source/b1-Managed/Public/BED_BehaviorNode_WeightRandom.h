#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_BehaviorNode.h"
#include "WeightConfig.h"
#include "BED_BehaviorNode_WeightRandom.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_WeightRandom : public UBED_BehaviorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightConfig> Weights;
    
    UBED_BehaviorNode_WeightRandom();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshAssetInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

