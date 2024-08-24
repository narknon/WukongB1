#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckTargetHasBuff.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckTargetHasBuff : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UBAID_CheckTargetHasBuff();

};

