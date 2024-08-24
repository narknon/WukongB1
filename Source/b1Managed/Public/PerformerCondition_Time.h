#pragma once
#include "CoreMinimal.h"
#include "PerformerConditionBase.h"
#include "PerformerCondition_Time.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerCondition_Time : public UPerformerConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPerformerCondition_Time();

};

