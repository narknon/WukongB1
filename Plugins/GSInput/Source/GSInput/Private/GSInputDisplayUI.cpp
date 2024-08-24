#include "GSInputDisplayUI.h"

UGSInputDisplayUI::UGSInputDisplayUI() : UUserWidget(FObjectInitializer::Get()) {
    this->IsCanSetting = false;
    this->ChangeScaleSpeed = 0.10f;
    this->MaxScaleRate = 2.00f;
    this->MinScaleRate = 0.50f;
    this->PosCon = NULL;
    this->GamepadCon = NULL;
    this->KeyboardCon = NULL;
}

void UGSInputDisplayUI::SetIsShow(bool IsShow) {
}

void UGSInputDisplayUI::ResetSetting() {
}

void UGSInputDisplayUI::OnInputMouseWheelOrGesture_Implementation(float InWheelDelta) {
}

void UGSInputDisplayUI::OnInputMouseMove_Implementation(FVector2D InMousePos) {
}

void UGSInputDisplayUI::OnInputMouseButtonUp_Implementation(FKey InKey) {
}

void UGSInputDisplayUI::OnInputMouseButtonDown_Implementation(FKey InKey) {
}

void UGSInputDisplayUI::OnInputMouseButtonDoubleClick_Implementation(FKey InKey) {
}

void UGSInputDisplayUI::OnInputKeyUp_Implementation(FKey InKey) {
}

void UGSInputDisplayUI::OnInputKeyDown_Implementation(FKey InKey) {
}

void UGSInputDisplayUI::OnInputAxisChange_Implementation(FKey InKey, float InAxisValue) {
}


