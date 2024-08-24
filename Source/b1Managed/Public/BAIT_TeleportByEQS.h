#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "ChangeTargetType.h"
#include "BAIT_TeleportByEQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class UBAIT_TeleportByEQS : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsRandom: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ChangeTargetType TurnRotationType;
    
    UBAIT_TeleportByEQS();

};

