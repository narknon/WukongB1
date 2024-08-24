#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckNearObstacle.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckNearObstacle : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EscapeThreshold;
    
    UBAID_CheckNearObstacle();

};

