#include "UMGSplineInfo.h"

FUMGSplineInfo::FUMGSplineInfo() {
    this->SplineType = EUMGSplineType::Linear;
    this->Thickness = 0.00f;
    this->bClosedLoop = false;
    this->BuildCustomVerts = false;
    this->CustomVertsVCoordScale = 0.00f;
}

