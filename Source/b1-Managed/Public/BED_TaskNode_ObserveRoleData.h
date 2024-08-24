#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "ObserveRoleDataInfo.h"
#include "BED_TaskNode_ObserveRoleData.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_ObserveRoleData : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObserveMinSuccessConditionNum;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObserveRoleDataInfo> ObserveRoleDataInfoList;
    
public:
    UBED_TaskNode_ObserveRoleData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

