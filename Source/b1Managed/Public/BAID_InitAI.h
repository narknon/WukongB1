#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_InitAI.generated.h"

UCLASS(Blueprintable)
class UBAID_InitAI : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsLoaded: 1;
    
    UBAID_InitAI();

};

