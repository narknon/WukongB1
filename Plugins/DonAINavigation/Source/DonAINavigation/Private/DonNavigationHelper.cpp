#include "DonNavigationHelper.h"

UDonNavigationHelper::UDonNavigationHelper() {
}

void UDonNavigationHelper::OnUpdateDynamicCollision(UPrimitiveComponent* Mesh, bool bDebug) {
}

void UDonNavigationHelper::OnNextSegment(UObject* Object, FVector NextPoint) {
}

void UDonNavigationHelper::OnLocomotionEnd(UObject* Object, const bool bLocomotionSuccess) {
}

void UDonNavigationHelper::OnLocomotionBegin(UObject* Object) {
}

void UDonNavigationHelper::OnLocomotionAbort(UObject* Object) {
}

int32 UDonNavigationHelper::GetQueryDataVolumeSolutionOptimizedNum(const FDoNNavigationQueryData& QueryData) {
    return 0;
}

int32 UDonNavigationHelper::GetQueryDataVolumeSolutionNum(const FDoNNavigationQueryData& QueryData) {
    return 0;
}

ADonNavigationManager* UDonNavigationHelper::DonNavigationManagerForActor(const AActor* Actor) {
    return NULL;
}

ADonNavigationManager* UDonNavigationHelper::DonNavigationManager(UObject* WorldContextObject) {
    return NULL;
}

void UDonNavigationHelper::AddMovementInputCustom(UObject* Object, FVector WorldDirection, float ScaleValue) {
}


