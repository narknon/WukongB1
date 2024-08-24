#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_SubGraph.h"
#include "GlobalTravelLevelType.h"
#include "TargetLevelNetType.h"
#include "BED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel : public UBED_FSMNode_SubGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GlobalTravelLevelType TravelLevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TargetLevelNetType TargetLevelNetType;
    
public:
    UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateGraphNodeInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

