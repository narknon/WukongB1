#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedAiConversationID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedAiConversationID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AiConversationIDList;
    
    FGsManagedAiConversationID();
};

