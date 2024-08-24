#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckMasterHasTalent.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckMasterHasTalent : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalentID;
    
    UBAID_CheckMasterHasTalent();

};

