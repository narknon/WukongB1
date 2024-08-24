#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "EBGUSimpleState.h"
#include "BAID_CheckUnitHasSimpleState.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckUnitHasSimpleState : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUSimpleState UnitSimpleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsCheckTarget: 1;
    
    UBAID_CheckUnitHasSimpleState();

};

