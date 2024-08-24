#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode.h"
#include "TaskStageConditionInfo.h"
#include "BED_ProcessMachineNode_NPCState.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ProcessMachineNode_NPCState : public UBED_ProcessMachineNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> StateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskStageConditionInfo> TaskStageConditionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentState;
    
    UBED_ProcessMachineNode_NPCState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetBranchGraphToEditInCS(FString& OutBranchGraphIdentifier);
    
};

