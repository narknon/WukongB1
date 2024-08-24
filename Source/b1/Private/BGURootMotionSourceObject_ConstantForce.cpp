#include "BGURootMotionSourceObject_ConstantForce.h"

UBGURootMotionSourceObject_ConstantForce::UBGURootMotionSourceObject_ConstantForce() {
}

bool UBGURootMotionSourceObject_ConstantForce::ApplyRootMotionSource(const FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode FinishVelocityMode, const FVector& FinishSetVelocity, float FinishClampVelocity, bool bEnableGravity) {
    return false;
}


