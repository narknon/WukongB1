#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_SelectTargetByEQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class UBAIT_SelectTargetByEQS : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsSetTarget: 1;
    
    UBAIT_SelectTargetByEQS();

};

