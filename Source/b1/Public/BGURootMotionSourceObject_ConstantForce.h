#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "BGURootMotionSourceObject_Base.h"
#include "BGURootMotionSourceObject_ConstantForce.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class B1_API UBGURootMotionSourceObject_ConstantForce : public UBGURootMotionSourceObject_Base {
    GENERATED_BODY()
public:
    UBGURootMotionSourceObject_ConstantForce();

    UFUNCTION(BlueprintCallable)
    bool ApplyRootMotionSource(const FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode FinishVelocityMode, const FVector& FinishSetVelocity, float FinishClampVelocity, bool bEnableGravity);
    
};

