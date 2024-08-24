#include "BUS_UtilComm.h"

UBUS_UtilComm::UBUS_UtilComm() {
}

void UBUS_UtilComm::SetCurActiveMontagePos(ACharacter* CurCharacter, float TargetPos) {
}

bool UBUS_UtilComm::SafeSetCharacterMontagePlayingRate(ACharacter* CurCharacter, float PlayRate) {
    return false;
}

bool UBUS_UtilComm::SafeSetCharacterMontagePlaying(ACharacter* CurCharacter, bool IsPlaying) {
    return false;
}

bool UBUS_UtilComm::PlayMontage(ACharacter* CurCharacter, UAnimMontage* AnimMontage) {
    return false;
}

UMatineeCameraShake* UBUS_UtilComm::PlayCameraShakeByClass(AActor* Caster, UClass* CameraShakeCls) {
    return NULL;
}

void UBUS_UtilComm::ParticleSystemComponentTrailSetTimeRate(ACharacter* CurCharacter, float TimeRate) {
}

UParticleSystem* UBUS_UtilComm::LoadParticleSystemFromString(const FString& ResPath, float DefaultDelayTime) {
    return NULL;
}

ULevelSequence* UBUS_UtilComm::LoadLevelSequenceFromString(const FString& ResPath) {
    return NULL;
}

UCurveFloat* UBUS_UtilComm::LoadCurveFloatFromString(const FString& ResPath) {
    return NULL;
}

UClass* UBUS_UtilComm::LoadCameraShakeFromString(const FString& ResPath) {
    return NULL;
}

UAnimMontage* UBUS_UtilComm::LoadAnimMontageFromString(const FString& ResPath) {
    return NULL;
}

UObject* UBUS_UtilComm::LoadAKEventFromString(const FString& ResPath) {
    return NULL;
}

bool UBUS_UtilComm::IsCharacterStoped(ACharacter* CurCharacter) {
    return false;
}

FRotator UBUS_UtilComm::GSEaseRotator(FRotator Start, FRotator End, float alpha, EGSBlendTypeG GSBlendTypeG, float EaseExp, bool IsShortestPath) {
    return FRotator{};
}

float UBUS_UtilComm::GSEase(float Start, float End, float alpha, EGSBlendTypeG GSBlendTypeG, float EaseExp) {
    return 0.0f;
}

float UBUS_UtilComm::GetUMatineeCameraShakeBlendOutTime(UMatineeCameraShake* CameraShake) {
    return 0.0f;
}

int32 UBUS_UtilComm::GetEasingFuncType(EGSBlendTypeG GSBlengTypeG) {
    return 0;
}

float UBUS_UtilComm::GetCurActiveMontagePos(ACharacter* CurCharacter) {
    return 0.0f;
}

FRotator UBUS_UtilComm::CalcYawRotator(const FVector& TargetLocation, const FVector& FromLocation) {
    return FRotator{};
}

FRotator UBUS_UtilComm::CalcDirWithInput(ACharacter* CurCharacter, float ForwardVal, float RightVal) {
    return FRotator{};
}

float UBUS_UtilComm::CalcDegreeFromVectorsProjectInXYPlane(const FVector& AVector, const FVector& BVector) {
    return 0.0f;
}

float UBUS_UtilComm::CalcDegreeFromRotatorsInYaw(const FRotator& ARotator, const FRotator& BRotator) {
    return 0.0f;
}


