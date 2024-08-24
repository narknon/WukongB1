#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "GsSmartParam.h"
#include "BED_BehaviorNode_ListenerTrigger.h"
#include "DetectedUnitType.h"
#include "BED_BehaviorNode_BeKilled.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_BeKilled : public UBED_BehaviorNode_ListenerTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DetectedUnitType UnitType_Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam SmartUnit_Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DetectedUnitType UnitType_Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam SmartUnit_Attacker;
    
    UBED_BehaviorNode_BeKilled();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

