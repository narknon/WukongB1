#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "PerformerConditionBase.h"
#include "PerformerCondition_InnerOverlap.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerCondition_InnerOverlap : public UPerformerConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam OverlapBox;
    
    UPerformerCondition_InnerOverlap();

};

