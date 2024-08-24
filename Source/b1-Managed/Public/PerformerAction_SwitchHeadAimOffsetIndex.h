#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "PerformerActionBase.h"
#include "PerformerAction_SwitchHeadAimOffsetIndex.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerAction_SwitchHeadAimOffsetIndex : public UPerformerActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPerformerAction_SwitchHeadAimOffsetIndex();

};

