#include "BWS_EnvInteractiveCapture.h"

ABWS_EnvInteractiveCapture::ABWS_EnvInteractiveCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleArrayData = NULL;
    this->RTSize = 0;
    this->RT = NULL;
    this->SceneCaptureComponent = NULL;
    this->CaptureMPC = NULL;
    this->CaptureInterval = 0.00f;
    this->ParticleFadeDuration = 0.00f;
    this->ParicleHeight = 0.00f;
}

void ABWS_EnvInteractiveCapture::Init() {
}

void ABWS_EnvInteractiveCapture::OnLateInit_Implementation() {
}

int32 ABWS_EnvInteractiveCapture::TriggerOnce(FVector position, FVector Size, int32 InteractiveType, float Intensity, float Duration) {
    return 0;
}

void ABWS_EnvInteractiveCapture::OnEnableDebug_Implementation() {
}

void ABWS_EnvInteractiveCapture::OnTickCapture() {
}

int32 ABWS_EnvInteractiveCapture::AddInteractor(UPrimitiveComponent* PrimComp, int32 InteractiveType, FVector Size, float Intensity, float Duration) {
    return 0;
}

void ABWS_EnvInteractiveCapture::RemoveInteractor(int32 InteractorID) {
}


