#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "EBGUSimpleState.h"
#include "BAIT_SetUnitSimpleState.generated.h"

UCLASS(Blueprintable)
class UBAIT_SetUnitSimpleState : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUSimpleState UnitSimpleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsRemove: 1;
    
    UBAIT_SetUnitSimpleState();

};

