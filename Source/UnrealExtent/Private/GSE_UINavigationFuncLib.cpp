#include "GSE_UINavigationFuncLib.h"

UGSE_UINavigationFuncLib::UGSE_UINavigationFuncLib() {
}

void UGSE_UINavigationFuncLib::SetRepeatFactor(float RepeatFactorInDefault, float RepeatFactorInPressure, float RepeatPressureFactor, float RepeatPressureCondition) {
}

void UGSE_UINavigationFuncLib::SetNeedTabKeyNavigation(bool IsNeed) {
}

void UGSE_UINavigationFuncLib::SetNeedNavigationAction(bool IsNeed) {
}

void UGSE_UINavigationFuncLib::SetNeedKeyNavigation(bool IsNeed) {
}

void UGSE_UINavigationFuncLib::SetNeedAnalogNavigation(bool IsNeed) {
}

void UGSE_UINavigationFuncLib::SetAnalogNavigationVerticalThreshold(float TargetThreshold) {
}

void UGSE_UINavigationFuncLib::SetAnalogNavigationHorizontalThreshold(float TargetThreshold) {
}

bool UGSE_UINavigationFuncLib::IsRepeatAction(const FKeyEvent InKeyEvent) {
    return false;
}

void UGSE_UINavigationFuncLib::InitSetWorkingGSUINavigation() {
}

EUINavigation UGSE_UINavigationFuncLib::GetNavigationDirectionFromKey(const FKeyEvent InKeyEvent) {
    return EUINavigation::Left;
}

EUINavigation UGSE_UINavigationFuncLib::GetNavigationDirectionFromAnalogForOP(const FAnalogInputEvent& InAnalogEvent) {
    return EUINavigation::Left;
}

EUINavigationAction UGSE_UINavigationFuncLib::GetNavigationActionFromKey(const FKeyEvent InKeyEvent) {
    return EUINavigationAction::Accept;
}

bool UGSE_UINavigationFuncLib::GetIsNeedTabKeyNavigation() {
    return false;
}

bool UGSE_UINavigationFuncLib::GetIsNeedNavigationAction() {
    return false;
}

bool UGSE_UINavigationFuncLib::GetIsNeedKeyNavigation() {
    return false;
}

bool UGSE_UINavigationFuncLib::GetIsNeedAnalogNavigation() {
    return false;
}

void UGSE_UINavigationFuncLib::ClearNavigationKeyByNavigation(EUINavigation TargetNavigation) {
}

void UGSE_UINavigationFuncLib::ClearNavigationKey(const FName& KeyName) {
}

void UGSE_UINavigationFuncLib::ClearNavigationActionKeyByAction(EUINavigationAction TargetNavigationAction) {
}

void UGSE_UINavigationFuncLib::ClearNavigationActionKey(const FName& KeyName) {
}

void UGSE_UINavigationFuncLib::ClearAllNavigationKey() {
}

void UGSE_UINavigationFuncLib::ClearAllNavigationActionKey() {
}

void UGSE_UINavigationFuncLib::BlockConflictNavigation(EGSUIConflictNavigationType ConflictNavigationType, bool bBlock, TArray<EUINavigation> NotBlockNavigations) {
}

void UGSE_UINavigationFuncLib::AddNavigationKey(EUINavigation TargetNavigation, const FName& KeyName) {
}

void UGSE_UINavigationFuncLib::AddNavigationActionKey(EUINavigationAction TargetNavigationAction, const FName& KeyName) {
}


