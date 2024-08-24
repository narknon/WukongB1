#include "BGWDataAsset_UnitBeAttackedConfig.h"

UBGWDataAsset_UnitBeAttackedConfig::UBGWDataAsset_UnitBeAttackedConfig() {
    this->NoteString1 = 0;
    this->NoteString2 = 0;
    this->NoteString3 = 0;
    this->BeHitResFlyHit = NULL;
    this->BeHitResFlyHitWithRM = NULL;
    this->BeRoaredResForLight = NULL;
    this->BeRoaredResForMedium = NULL;
    this->BeRoaredResForHeavy = NULL;
    this->PointAttractionFrontAM = NULL;
    this->PointAttractionBackAM = NULL;
    this->BeBlindStiffingAM = NULL;
    this->ImmobilizeBreakForwardAM = NULL;
    this->ImmobilizeBreakBackwardAM = NULL;
    this->ImmobilizeBreakLeftsideAM = NULL;
    this->ImmobilizeBreakRightsideAM = NULL;
    this->ForwardBeAttackedAdditiveAnim = NULL;
    this->RightBeAttackedAdditiveAnim = NULL;
    this->LeftBeAttackedAdditiveAnim = NULL;
    this->BackwardBeAttackedAdditiveAnim = NULL;
    this->FrozenBreakAM = NULL;
    this->Enable_Rotate_AssistBreakFrozen = false;
    this->AssistBreakFrozenAM = NULL;
    this->HitLevelDivide_Jump = 0;
    this->ForwardBeAttackedAdditiveAnim_Jump = NULL;
    this->RightBeAttackedAdditiveAnim_Jump = NULL;
    this->LeftBeAttackedAdditiveAnim_Jump = NULL;
    this->BackwardBeAttackedAdditiveAnim_Jump = NULL;
    this->BeAttackedAnim_Jump = NULL;
    this->BeAttackedAnim_Jump_CliffDistCheck = 0.00f;
    this->BeAttackedAnim_PillarFormBreak = NULL;
}


