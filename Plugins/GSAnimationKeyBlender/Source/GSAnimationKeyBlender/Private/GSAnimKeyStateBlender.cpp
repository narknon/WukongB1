#include "GSAnimKeyStateBlender.h"

UGSAnimKeyStateBlender::UGSAnimKeyStateBlender() {
    this->RefAnimation = NULL;
    this->RefLevelSequence = NULL;
    this->RefObject = NULL;
    this->IsStrictStateMatchCfg = false;
    this->IsAlwaysUsingEndStateAsChanging = false;
    this->IsWithRegStateName = false;
    this->IsTicking = false;
    this->StateEasedTime = 0.00f;
    this->StateDelayEasingTime = 0.00f;
    this->StateOverideEasingTime = -1.00f;
    this->IsWidgetBlender = false;
}

void UGSAnimKeyStateBlender::ToState(FName TargetStateName, float InStateDelayEasingTime, float InStateOverideEasingTime) {
}

bool UGSAnimKeyStateBlender::IsInBlending() {
    return false;
}

void UGSAnimKeyStateBlender::InitSetWidgetAnimation(UUserWidget* InRefUserWidget, UWidgetAnimation* InWidgetAnimation, bool InIsStrictStateMatchCfg, bool InIsAlwaysUsingEndStateAsChanging) {
}

void UGSAnimKeyStateBlender::InitSetLevelSequence(UObject* InRefObject, ULevelSequence* InLevelSequence, bool InIsStrictStateMatchCfg, bool InIsAlwaysUsingEndStateAsChanging) {
}

void UGSAnimKeyStateBlender::InitSetDefaultEasingCfg(float InEasingTime, TEnumAsByte<EEasingFunc::Type> InEasingFunc, float InEasingBlendExp, int32 InEasingSteps, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InEnumValEasingType, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InBoolValEasingType, float InDelayEasingTime) {
}

void UGSAnimKeyStateBlender::InitResetState() {
}

void UGSAnimKeyStateBlender::InitAddStateToStateEasingCfg(FName FromStateName, FName ToStateName, float InEasingTime, TEnumAsByte<EEasingFunc::Type> InEasingFunc, float InEasingBlendExp, int32 InEasingSteps, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InEnumValEasingType, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InBoolValEasingType, float InDelayEasingTime) {
}

float UGSAnimKeyStateBlender::GetPredicToStateCfgEasingTime(FName TargetStateName, float& OutDelayEasingTime) {
    return 0.0f;
}

FName UGSAnimKeyStateBlender::GetEndStateName() {
    return NAME_None;
}

FName UGSAnimKeyStateBlender::GetCurrentStateName() {
    return NAME_None;
}

FName UGSAnimKeyStateBlender::GetBeginStateName() {
    return NAME_None;
}

void UGSAnimKeyStateBlender::ForceSetStateImmediately(FName TargetStateName) {
}

void UGSAnimKeyStateBlender::EasingToEndState(float alpha, bool IsFromForceSetStateImmediately) {
}

void UGSAnimKeyStateBlender::DoTick(float DeltaTime) {
}

void UGSAnimKeyStateBlender::DoDebug() {
}

void UGSAnimKeyStateBlender::BeforeInitAddBindingActor(ALevelSequenceActor* RefLevelSequenceActor, FName BindingActorTagName, AActor* InActor) {
}


