#include "BGWDataAsset_UnitDynamicObstaclePerformanceConfig.h"

UBGWDataAsset_UnitDynamicObstaclePerformanceConfig::UBGWDataAsset_UnitDynamicObstaclePerformanceConfig() {
    this->bDontPlayDBC = false;
    this->OverrideDBC = NULL;
    this->PerformAMType = UnitDynamicObstaclePerformAMType::OnlyFront;
    this->bNeedRot = false;
    this->F_DegLine_FBMode = 0.00f;
    this->F_DegLine_4DirMode = 0.00f;
    this->B_DegLine_4DirMode = 0.00f;
}


