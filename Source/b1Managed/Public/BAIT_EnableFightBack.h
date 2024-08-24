#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_EnableFightBack.generated.h"

UCLASS(Blueprintable)
class UBAIT_EnableFightBack : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsEnableFightBack: 1;
    
    UBAIT_EnableFightBack();

};

