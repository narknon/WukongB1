#include "GSEArteriesSplineComponent.h"

UGSEArteriesSplineComponent::UGSEArteriesSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSplineClosed = false;
}

void UGSEArteriesSplineComponent::SetGSArteriesSplineMinUnitLength(float Length) {
}

bool UGSEArteriesSplineComponent::MakeGSArteriesSplineClosedAsRect(float CloseDistance) {
    return false;
}

bool UGSEArteriesSplineComponent::IsGSArteriesSplineClosed() {
    return false;
}

void UGSEArteriesSplineComponent::BindSplineToBoxExtent(FVector InBoxExtent) {
}


