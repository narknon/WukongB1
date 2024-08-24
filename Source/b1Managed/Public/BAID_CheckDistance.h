#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "EAICheckDistanceType.h"
#include "EAICheckTarget.h"
#include "BAID_CheckDistance.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckDistance : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAICheckTarget CheckTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAICheckDistanceType CheckDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreferCloser: 1;
    
    UBAID_CheckDistance();

};

