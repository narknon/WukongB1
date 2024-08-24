#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_Counter.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_Counter : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Goal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSum;
    
public:
    UBED_QuestNode_Counter();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetStatusStringInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

