#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckCurTargetType.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckCurTargetType : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UnitIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UsePlayerForTarget: 1;
    
    UBAID_CheckCurTargetType();

};

