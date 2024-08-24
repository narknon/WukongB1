#include "BGWUIDropItemConfigDataAsset.h"

UBGWUIDropItemConfigDataAsset::UBGWUIDropItemConfigDataAsset() {
    this->DropItemWidgetCls = NULL;
    this->DropItemFlyTime = 0.00f;
    this->DropItemDelayDestroyTime = 0.00f;
    this->DropItemFlyCurveType = DropItemFlyCurveType::FastBezier;
    this->AmplitudeMin = 0.00f;
    this->AmplitudeMax = 0.00f;
    this->EffectBoomLengthMin = 0.00f;
    this->EffectBoomLengthMax = 0.00f;
    this->DistParam = 0.00f;
    this->DegParam = 0.00f;
}


