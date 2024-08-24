#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "PerformerActionBase.h"
#include "PerformerAction_AIConversation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerAction_AIConversation : public UPerformerActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ConversationContentIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Performer;
    
    UPerformerAction_AIConversation();

};

