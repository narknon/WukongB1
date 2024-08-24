#pragma once
#include "CoreMinimal.h"
#include "BED_BehaviorNode_Condition.h"
#include "DetectCondition.h"
#include "DetectedForceType.h"
#include "BED_BehaviorNode_DetectForce.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_BehaviorNode_DetectForce : public UBED_BehaviorNode_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DetectedForceType ForceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectUnit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectBullet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetectMagicField: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetectCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessCount;
    
    UBED_BehaviorNode_DetectForce();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

