#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "GsSmartParam.h"
#include "BED_BehaviorNode_Condition.h"
#include "ConditionalRelation.h"
#include "DetectCondition.h"
#include "DetectedUnitType.h"
#include "BED_BehaviorNode_DetectUnit.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_DetectUnit : public UBED_BehaviorNode_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DetectedUnitType UnitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam SmartUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetectCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ConditionalRelation ConditionalRelation;
    
    UBED_BehaviorNode_DetectUnit();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

