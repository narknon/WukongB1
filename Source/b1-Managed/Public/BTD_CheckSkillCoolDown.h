#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BTD_CheckSkillCoolDown.generated.h"

UCLASS(Blueprintable)
class UBTD_CheckSkillCoolDown : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UBTD_CheckSkillCoolDown();

};

