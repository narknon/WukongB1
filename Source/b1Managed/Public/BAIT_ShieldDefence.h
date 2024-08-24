#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_ShieldDefence.generated.h"

UCLASS(Blueprintable)
class UBAIT_ShieldDefence : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsShieldUp: 1;
    
    UBAIT_ShieldDefence();

};

