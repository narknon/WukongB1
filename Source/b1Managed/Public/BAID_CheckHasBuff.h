#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckHasBuff.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckHasBuff : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UBAID_CheckHasBuff();

};

