#pragma once
#include "CoreMinimal.h"
#include "ConditionalRelation.h"
#include "PerformerConditionBase.h"
#include "PerformerCondition_Composite.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerCondition_Composite : public UPerformerConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPerformerConditionBase*> SubConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ConditionalRelation Relation;
    
    UPerformerCondition_Composite();

};

