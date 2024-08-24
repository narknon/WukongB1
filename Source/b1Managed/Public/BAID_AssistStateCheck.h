#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "PartnerAssistState.h"
#include "BAID_AssistStateCheck.generated.h"

UCLASS(Blueprintable)
class UBAID_AssistStateCheck : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PartnerAssistState AssistState;
    
    UBAID_AssistStateCheck();

};

