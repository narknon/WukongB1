#include "GSFloatCurveToParam.h"

FGSFloatCurveToParam::FGSFloatCurveToParam() {
    this->CurveFloat = NULL;
    this->NotUseCurve = false;
    this->OriFloatValue = 0.00f;
    this->TargetFloatValue = 0.00f;
    this->Association = LayerParameter;
    this->LayerFunction = NULL;
}

