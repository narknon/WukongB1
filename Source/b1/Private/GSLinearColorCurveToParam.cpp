#include "GSLinearColorCurveToParam.h"

FGSLinearColorCurveToParam::FGSLinearColorCurveToParam() {
    this->CurveLinearColor = NULL;
    this->NotUseCurve = false;
    this->Association = LayerParameter;
    this->LayerFunction = NULL;
}

