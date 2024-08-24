#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_GainItemPerformance.generated.h"

UCLASS(Blueprintable)
class UBED_QuestNode_GainItemPerformance : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UBED_QuestNode_GainItemPerformance();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

