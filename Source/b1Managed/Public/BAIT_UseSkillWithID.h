#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "SkillIDSource.h"
#include "BAIT_UseSkillWithID.generated.h"

UCLASS(Blueprintable)
class UBAIT_UseSkillWithID : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SkillIDSource SkillIDSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsEndSkill: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableDebug: 1;
    
    UBAIT_UseSkillWithID();

};

