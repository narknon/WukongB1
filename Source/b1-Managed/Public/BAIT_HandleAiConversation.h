#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_HandleAiConversation.generated.h"

UCLASS(Blueprintable)
class UBAIT_HandleAiConversation : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ConversationContentIDList;
    
    UBAIT_HandleAiConversation();

};

