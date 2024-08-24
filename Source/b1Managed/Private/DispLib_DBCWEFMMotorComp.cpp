#include "DispLib_DBCWEFMMotorComp.h"

UDispLib_DBCWEFMMotorComp::UDispLib_DBCWEFMMotorComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Delay = 0.00f;
    this->EndMode = DispLibDBCEndMode::AutoRelease;
    this->Duration = 0.00f;
    this->TriggerProbability = 0.00f;
    this->VelocityThreshold = 0.00f;
    this->ScaleVelocityIntensity = 0.00f;
    this->DistanceDamplingRate = 0.00f;
    this->WindMotorMode = DispLibDBCWindMotorMode::NoWind;
    this->RangeAxis = DispLibDBCAxisMode::WS_X;
    this->RangeMask = 0.00f;
    this->VelocityDir = DispLibDBCAxisMode::WS_X;
}

void UDispLib_DBCWEFMMotorComp::EditorTestDoOnceWindEvent() {
}

void UDispLib_DBCWEFMMotorComp::BeginPlayInCS_Implementation() {
}

void UDispLib_DBCWEFMMotorComp::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

void UDispLib_DBCWEFMMotorComp::TickComponentInCS_Implementation(float DeltaTime) {
}


