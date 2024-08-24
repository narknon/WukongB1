#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "EBGUUnitState.h"
#include "BAID_CheckUnitHasState.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckUnitHasState : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUUnitState UnitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsCheckTarget: 1;
    
    UBAID_CheckUnitHasState();

};

