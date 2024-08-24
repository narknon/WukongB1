#include "BAIT_Combo.h"

UBAIT_Combo::UBAIT_Combo() {
    this->ComboTargetType = ComboTargetType::CurrentAITarget;
    this->SkillSourceType = ZatoichiSkillSourceType::UseWithSkillCategory;
    this->CanUpdateComboTargetWhenPursuit = false;
    this->PursuitInAllSkill = false;
    this->PursuitAnyWhere = false;
    this->ForceCastSkillAfterPursuitFailed = false;
    this->PursuitRangePos = 1.00f;
    this->SpeedRateType = EAIMoveSpeedType::SPRINT;
    this->MotionMatchingMoveMode = State_MM::Free;
    this->MoveAIType = EBGUMoveAIType::KeepFacingTarget;
    this->MoveAcceptableRadiusType = EBGUMoveAcceptableRadiusType::IncludeTarget;
    this->BeginRotateAngle = 0.00f;
    this->IsUseSkillForTurn = false;
    this->IsUseSkillForMove = false;
    this->BeginMoveDistanceWhenUseSkill = 0.00f;
    this->CanCheckCastSkillDuringWholeComboWindow = false;
    this->EnableInterruptReduceCBNum = false;
    this->NeedTraceHitTargetBefore = false;
    this->EnableForceComboRelation = false;
    this->EnableComboCondition = true;
    this->TraceDistance = 0.00f;
    this->TraceTypeQuery = TraceTypeQuery1;
    this->IsGetTopRandomSkill = false;
    this->TopRandomSkillPercent = 0;
    this->IsGetAdvanceComboLength = false;
    this->bCanBeForceAbort = false;
    this->bCanBeInterruptedByHRCounterattack = false;
    this->UseSocketDirection = false;
    this->SkillConfigMode = EscapeSkillConfigMode::Single;
    this->AvoidObstacleSectionNum = 1;
    this->SectionsStartAngle = 0.00f;
    this->IntervalAngle = 360.00f;
    this->AvoidObstacleSections.AddDefaulted(1);
}

FString UBAIT_Combo::QACalcSkillArray() {
    return TEXT("");
}

TArray<FString> UBAIT_Combo::QACalcTrueComboArray() {
    return TArray<FString>();
}

void UBAIT_Combo::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


