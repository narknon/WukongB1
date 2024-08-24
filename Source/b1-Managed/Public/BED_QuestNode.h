#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_QuestNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_QuestNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_QuestNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

