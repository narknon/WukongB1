#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "EscapeWay.h"
#include "BAID_CheckEscapeWay.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckEscapeWay : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EscapeWay EscapeWay;
    
    UBAID_CheckEscapeWay();

};

