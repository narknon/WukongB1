#include "BGURootMotionFollowMovementComponent.h"

UBGURootMotionFollowMovementComponent::UBGURootMotionFollowMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UBGUCharacterMovementComponent* UBGURootMotionFollowMovementComponent::GetMasterMoveComp() {
    return NULL;
}


