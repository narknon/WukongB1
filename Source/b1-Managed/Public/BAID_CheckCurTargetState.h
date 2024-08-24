#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "EBGUSimpleState.h"
#include "EBGUUnitState.h"
#include "BAID_CheckCurTargetState.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckCurTargetState : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBGUUnitState> UnitStateCheckList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBGUSimpleState> SimpleStateCheckList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UsePlayerForTarget: 1;
    
    UBAID_CheckCurTargetState();

};

