#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode.h"
#include "BED_ProcessMachineNode_GroupStart.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_GroupStart : public UBED_ProcessMachineNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UBED_ProcessMachineNode_GroupStart();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

