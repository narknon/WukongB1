#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeNodeBae.h"
#include "BED_SkillNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_SkillNode : public UBED_CalliopeNodeBae {
    GENERATED_BODY()
public:
    UBED_SkillNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};

