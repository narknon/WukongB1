#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Action.h"
#include "FCBGCastSkillInfo.h"
#include "BED_BehaviorNode_CastSkillByScore.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_CastSkillByScore : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFCBGCastSkillInfo> SkillInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsGetTopRandomSkill: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TopRandomSkillPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedTryCastAllSkillUntilSuccess: 1;
    
    UBED_BehaviorNode_CastSkillByScore();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

