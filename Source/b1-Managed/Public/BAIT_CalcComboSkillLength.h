#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "ComboSkillNumInfo.h"
#include "BAIT_CalcComboSkillLength.generated.h"

UCLASS(Blueprintable)
class UBAIT_CalcComboSkillLength : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComboSkillNumInfo> ComboSkillNumInfo;
    
    UBAIT_CalcComboSkillLength();

};

