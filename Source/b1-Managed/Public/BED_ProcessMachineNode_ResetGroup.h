#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode_TemplateBase.h"
#include "CompositeTransitionCondition_Group.h"
#include "BED_ProcessMachineNode_ResetGroup.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_ResetGroup : public UBED_ProcessMachineNode_TemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeTransitionCondition_Group> TransitionConditions;
    
    UBED_ProcessMachineNode_ResetGroup();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshAssetInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

