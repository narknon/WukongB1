#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckCanCastAnySkill.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckCanCastAnySkill : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Skills;
    
    UBAID_CheckCanCastAnySkill();

};

