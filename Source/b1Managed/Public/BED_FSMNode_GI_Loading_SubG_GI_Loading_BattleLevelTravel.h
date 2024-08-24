#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_SubGraph.h"
#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel : public UBED_FSMNode_SubGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedWaitCameraBlend: 1;
    
public:
    UBED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateGraphNodeInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

