#include "BGUSeqAKBActor.h"

ABGUSeqAKBActor::ABGUSeqAKBActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultEasingTime = 1.00f;
    this->DefaultEasingFunc = EEasingFunc::EaseInOut;
    this->DefaultEasingBlendExp = 2.00f;
    this->DefaultEasingSteps = 2;
    this->DefaultDelayEasingTime = 0.00f;
    this->DefaultEnumValEasingType = EGSAnimKBEnumBoolEasing::GSEnd;
    this->DefaultBoolValEasingType = EGSAnimKBEnumBoolEasing::GSEnd;
    this->IsStrictStateMatchCfg = false;
    this->IsAlwaysUsingEndStateAsChanging = false;
    this->GSAnimKeyStateBlenderObj = NULL;
}

void ABGUSeqAKBActor::DoTick(float DeltaSeconds) {
}

void ABGUSeqAKBActor::GSInit() {
}

void ABGUSeqAKBActor::ToState(FName TargetState, float InStateDelayEasingTime, float InStateOverideEasingTime) {
}

void ABGUSeqAKBActor::OnAKBStateEndFunc(FName BegineState, FName EndState, bool IsForceImSet) {
}

void ABGUSeqAKBActor::OnAKBStateBeginFunc(FName BegineState, FName EndState, bool IsForceImSet) {
}

void ABGUSeqAKBActor::WoodTestAnimKeyState(const FString& AnimName, const FString& TargetState, float InStateDelayEasingTime, bool IsForce) {
}

void ABGUSeqAKBActor::OnAKBStateInteruptFunc(FName BegineState, FName EndState, bool IsForceImSet) {
}

void ABGUSeqAKBActor::GSBeforeInitAddBindingActor(FName BindingActorTagName, AActor* InActor) {
}

void ABGUSeqAKBActor::GetPredicToStateCfgEasingTime(FName TargetState, float& PredicCfgEasingTime, float& PredicCfgDelayEasingTime) {
}


