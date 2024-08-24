#include "BGWDataAsset_BulletSmartSelectTargetConfig.h"

UBGWDataAsset_BulletSmartSelectTargetConfig::UBGWDataAsset_BulletSmartSelectTargetConfig() {
    this->SearchRadius = 0;
    this->TargetTeamFilter = 0;
    this->TargetTypeFilter = 0;
    this->MultiTargetConditionTyp = MultiTargetConditionType::None;
    this->Param1 = 0;
    this->Param2 = 0;
    this->SearchTargetDelayTime = 0.00f;
    this->BeAttackedDecreaseValue = 0.00f;
    this->BulletDistanceDecreaseValue = 0.00f;
    this->LastTargetDotDecreaseValue = 0.00f;
    this->MasterDistanceDecreaseValue = 0.00f;
    this->HitCountAddition = 0;
    this->PerformanceProjectileID = 0;
    this->BackNestProjectileID = 0;
    this->LifeTime = 0.00f;
}


