#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode_TemplateBase.h"
#include "CompositeTransitionCondition_Idle.h"
#include "IdleProcessAction.h"
#include "BED_ProcessMachineNode_Idle.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_Idle : public UBED_ProcessMachineNode_TemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeTransitionCondition_Idle> TransitionConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIdleProcessAction> ProcessActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseResetPin: 1;
    
    UBED_ProcessMachineNode_Idle();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

