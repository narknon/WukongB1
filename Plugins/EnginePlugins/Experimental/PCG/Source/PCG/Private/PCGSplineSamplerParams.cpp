#include "PCGSplineSamplerParams.h"

FPCGSplineSamplerParams::FPCGSplineSamplerParams() {
    this->Dimension = EPCGSplineSamplingDimension::OnSpline;
    this->Mode = EPCGSplineSamplingMode::Subdivision;
    this->Fill = EPCGSplineSamplingFill::Fill;
    this->SubdivisionsPerSegment = 0;
    this->DistanceIncrement = 0.00f;
    this->NumPlanarSubdivisions = 0;
    this->NumHeightSubdivisions = 0;
    this->bComputeDirectionDelta = false;
    this->bComputeCurvature = false;
    this->bUnbounded = false;
    this->InteriorSampleSpacing = 0.00f;
    this->InteriorBorderSampleSpacing = 0.00f;
    this->bTreatSplineAsPolyline = false;
    this->InteriorOrientation = EPCGSplineSamplingInteriorOrientation::Uniform;
    this->bProjectOntoSurface = false;
    this->PointSteepness = 0.00f;
    this->bSeedFromLocalPosition = false;
    this->bSeedFrom2DPosition = false;
}

