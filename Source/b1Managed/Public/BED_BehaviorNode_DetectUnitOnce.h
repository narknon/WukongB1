#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "GsSmartParam.h"
#include "BED_BehaviorNode.h"
#include "ConditionalRelation.h"
#include "DetectCondition.h"
#include "DetectedUnitType.h"
#include "BED_BehaviorNode_DetectUnitOnce.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_DetectUnitOnce : public UBED_BehaviorNode {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverseCondition: 1;
    
    UBED_BehaviorNode_DetectUnitOnce();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

