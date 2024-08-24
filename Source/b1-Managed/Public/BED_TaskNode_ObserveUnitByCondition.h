#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "ObserveActorInfo.h"
#include "BED_TaskNode_ObserveUnitByCondition.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_ObserveUnitByCondition : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObserveActorInfo ObserveActorInfo;
    
    UBED_TaskNode_ObserveUnitByCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

