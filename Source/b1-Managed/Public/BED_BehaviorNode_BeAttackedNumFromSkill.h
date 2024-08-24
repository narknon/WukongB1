#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "GsSmartParam.h"
#include "BED_BehaviorNode_ListenerTrigger.h"
#include "DetectedUnitType.h"
#include "ValueCompareOperationType.h"
#include "BED_BehaviorNode_BeAttackedNumFromSkill.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_BeAttackedNumFromSkill : public UBED_BehaviorNode_ListenerTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DetectedUnitType UnitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam SmartUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ValueCompareOperationType CompareOperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeHittedNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDuration;
    
    UBED_BehaviorNode_BeAttackedNumFromSkill();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

