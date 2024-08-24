#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode_TemplateBase.h"
#include "BattleStartCondition.h"
#include "CompositeTransitionCondition_Battle.h"
#include "UnitsAndSpawners.h"
#include "BED_ProcessMachineNode_Battle.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_Battle : public UBED_ProcessMachineNode_TemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleStartCondition StartCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitsAndSpawners BattleStartActiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeTransitionCondition_Battle> TransitionConditions;
    
    UBED_ProcessMachineNode_Battle();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

