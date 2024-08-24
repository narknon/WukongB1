#include "BANS_DispLibApplyWindSource.h"

UBANS_DispLibApplyWindSource::UBANS_DispLibApplyWindSource() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->EditorActive = false;
    this->EditorPlayActive = false;
    this->TriggerProbability = 1.00f;
    this->VelocityThreshold = 1500.00f;
    this->ScaleVelocityIntensity = 0.05f;
    this->DistanceDamplingRate = 0.00f;
    this->WindMotorMode = DispLibDBCWindMotorMode::LocalOmniWind;
    this->RangeAxis = DispLibDBCAxisMode::WS_Z;
    this->RangeMask = -1.10f;
    this->VelocityDir = DispLibDBCAxisMode::WS_X;
    this->DBC_IdentityID = 0;
    this->WindType = 0;
}

void UBANS_DispLibApplyWindSource::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_DispLibApplyWindSource::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_DispLibApplyWindSource::Received_NotifyTick_Implementation(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) const {
    return false;
}


