#include "BED_BehaviorNode_Combo.h"

UBED_BehaviorNode_Combo::UBED_BehaviorNode_Combo() {
    this->InputPins.AddDefaulted(1);
    this->ComboTargetType = ComboTargetType::None;
    this->SkillSourceType = ZatoichiSkillSourceType::None;
    this->PursuitInAllSkill = false;
    this->PursuitAnyWhere = false;
    this->ForceCastSkillAfterPursuitFailed = false;
    this->PursuitRangePos = 0.00f;
    this->SpeedRateType = EAIMoveSpeedType::JOG;
    this->MotionMatchingMoveMode = State_MM::None;
    this->MoveAIType = EBGUMoveAIType::None;
    this->MoveAcceptableRadiusType = EBGUMoveAcceptableRadiusType::NoInclude;
    this->BeginRotateAngle = 0.00f;
    this->IsUseSkillForTurn = false;
    this->IsUseSkillForMove = false;
    this->BeginMoveDistanceWhenUseSkill = 0.00f;
    this->EnableInterruptReduceCBNum = false;
    this->NeedTraceHitTargetBefore = false;
    this->EnableForceComboRelation = false;
    this->EnableComboCondition = false;
    this->TraceDistance = 0.00f;
    this->TraceTypeQuery = TraceTypeQuery1;
    this->IsGetTopRandomSkill = false;
    this->TopRandomSkillPercent = 0;
    this->IsGetAdvanceComboLength = false;
    this->IsCanBeForceAbort = false;
    this->UseSocketDirection = false;
    this->SkillConfigMode = EscapeSkillConfigMode::None;
    this->AvoidObstacleSectionNum = 0;
    this->SectionsStartAngle = 0.00f;
    this->IntervalAngle = 0.00f;
}


