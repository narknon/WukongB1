#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "BED_TaskNode.h"
#include "SequencePhase.h"
#include "BED_TaskNode_ObserveSequence.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_ObserveSequence : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SequencePhase SequencePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Sequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessLimit;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceID;
    
    UBED_TaskNode_ObserveSequence();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

