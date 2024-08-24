#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "EBTTargetType.h"
#include "BAIT_TurnToTarget.generated.h"

UCLASS(Blueprintable)
class UBAIT_TurnToTarget : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTTargetType BTTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginRotateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsUseSkillForTurn: 1;
    
    UBAIT_TurnToTarget();

};

