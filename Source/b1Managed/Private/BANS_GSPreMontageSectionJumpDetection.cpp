#include "BANS_GSPreMontageSectionJumpDetection.h"

UBANS_GSPreMontageSectionJumpDetection::UBANS_GSPreMontageSectionJumpDetection() {
    this->OverlayDetectTargetType = ChangeTargetType::None;
    this->SectionJumpType = MontageSectionJumpType::None;
    this->IgnoreSimplateState = EBGUSimpleState::Normal;
    this->bForceSuccess = false;
    this->DetectionRadius = 0.00f;
    this->DetectOnlyAtStart = false;
    this->bEnableDebugDraw = false;
    this->AnimationSyncMontage = NULL;
    this->bReversePreDetectionResult = false;
    this->bJumpImmediately = false;
}

void UBANS_GSPreMontageSectionJumpDetection::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

EGsEnAnimNS UBANS_GSPreMontageSectionJumpDetection::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSPreMontageSectionJumpDetection::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

FString UBANS_GSPreMontageSectionJumpDetection::GetJumpableSectionPrefix_Implementation() const {
    return TEXT("");
}


