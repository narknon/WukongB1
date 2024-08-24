#pragma once
#include "CoreMinimal.h"
#include "EAIBasicActionType.h"
#include "BAIT_Base.h"
#include "BAIT_ExecuteBasicAction.generated.h"

UCLASS(Blueprintable)
class UBAIT_ExecuteBasicAction : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIBasicActionType BaseActionType;
    
    UBAIT_ExecuteBasicAction();

};

