#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BAID_Base.h"
#include "BAID_CheckCurrentMoveMode.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckCurrentMoveMode : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementMode ToCheckMoveMode;
    
    UBAID_CheckCurrentMoveMode();

};

