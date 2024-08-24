#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckStalemateMoveTimeAbove.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckStalemateMoveTimeAbove : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDebugLog: 1;
    
    UBAID_CheckStalemateMoveTimeAbove();

};

