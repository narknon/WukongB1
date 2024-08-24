#include "HoudiniSplineComponent.h"

UHoudiniSplineComponent::UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurvePoints.AddDefaulted(2);
    this->DisplayPoints.AddDefaulted(2);
    this->bClosed = false;
    this->bReversed = false;
    this->CurveOrder = 2;
    this->bIsHoudiniSplineVisible = true;
    this->CurveType = EHoudiniCurveType::Polygon;
    this->CurveMethod = EHoudiniCurveMethod::CVs;
    this->CurveBreakpointParameterization = EHoudiniCurveBreakpointParameterization::Uniform;
    this->bIsOutputCurve = false;
    this->bCookOnCurveChanged = true;
    this->bIsLegacyInputCurve = false;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = false;
    this->bIsInputCurve = false;
    this->bIsEditableOutputCurve = false;
    this->NodeId = -1;
}


