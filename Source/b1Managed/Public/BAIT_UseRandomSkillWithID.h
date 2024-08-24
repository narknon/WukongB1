#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_UseRandomSkillWithID.generated.h"

UCLASS(Blueprintable)
class UBAIT_UseRandomSkillWithID : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsEndSkill: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableDebug: 1;
    
    UBAIT_UseRandomSkillWithID();

};

