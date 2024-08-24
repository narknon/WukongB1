#include "BGWDataAsset_StateLib.h"

UBGWDataAsset_StateLib::UBGWDataAsset_StateLib() {
    this->LeftSmallTurnSkillID = 0;
    this->RightSmallTurnSkillID = 0;
    this->LeftBigTurnSkillID = 0;
    this->RightBigTurnSkillID = 0;
    this->MoveSpeedFast = 0.00f;
    this->MoveSpeedNormal = 0.00f;
    this->MoveSpeedSlow = 0.00f;
    this->ABPSetting = NULL;
    this->BeAttackedInfoID = 0;
    this->UnitCameraID = 0;
    this->DeadInfoID = 0;
    this->MovementMode = MOVE_None;
    this->PartRuleID = 0;
    this->DodgeSkillID = 0;
    this->PreciseDodgeSkillID = 0;
    this->AMScaleMaxRate = 0.00f;
    this->SpecialBoneConfig = NULL;
    this->bEnable_BodiesCollisionEnable = false;
}


