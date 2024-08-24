#include "BANSM_Base.h"

UBANSM_Base::UBANSM_Base() {
    this->NotifyStateClass = NULL;
    this->NotifyClass = NULL;
}

void UBANSM_Base::MarkNotify_Implementation(UAnimSequenceBase* AnimSeq, float StartTime) {
}

bool UBANSM_Base::CheckState_Implementation(UAnimSequenceBase* AnimBase, float CurTime) {
    return false;
}

void UBANSM_Base::GenerateNotify() {
}

void UBANSM_Base::MarkNotifyState_Implementation(UAnimSequenceBase* AnimSeq, float StartTime, float EndTime) {
}

void UBANSM_Base::GenerateNotifyState() {
}

void UBANSM_Base::RefreshAttackWarning(UAnimMontage* AnimMontage, float PreTimeSeconds, float PostTimeSeconds) {
}

void UBANSM_Base::AddSweepCheckAttackWarning(UAnimMontage* AnimMontage, float CheckSphereRadiusIncrease) {
}

void UBANSM_Base::AddExtraSocketAttackWarning(UAnimMontage* AnimMontage, int32 SocketNum, float SocketRadius, int32 LengthFrame) {
}

void UBANSM_Base::UpdateExtraSocketAttackWarning(UAnimMontage* AnimMontage, int32 LengthFrame) {
}

UClass* UBANSM_Base::GetSupportedClass_Implementation() const {
    return NULL;
}

void UBANSM_Base::AddPlayerWaterSplash_BySweepCheck(UAnimMontage* AnimMontage, FName _SocketName, float SweepRadius, float PointBetweenMin, float SampleStep) {
}

void UBANSM_Base::ClearGeneratedAttackWarningsByTrack(UAnimMontage* AnimMontage) {
}

void UBANSM_Base::AddPreciseDodgeAttackWarningAndSocket(UAnimMontage* AnimMontage, float PreTimeSeconds, float PostTimeSeconds, float CheckSphereRadius, int32 AddSocketNumPerAnim) {
}


