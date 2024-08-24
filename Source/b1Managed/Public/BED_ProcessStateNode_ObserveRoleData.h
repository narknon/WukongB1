#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "ObserveRoleDataInfo.h"
#include "BED_ProcessStateNode_ObserveRoleData.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_ObserveRoleData : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObserveMinSuccessConditionNum;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObserveRoleDataInfo> ObserveRoleDataInfoList;
    
public:
    UBED_ProcessStateNode_ObserveRoleData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

