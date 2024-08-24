#include "GSInputDisplayWidget.h"

UGSInputDisplayWidget::UGSInputDisplayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InputDisplayType = EInputDisplayType::NORNAL_BUTTON;
    this->JoystickMoveLength = 0.00f;
}

void UGSInputDisplayWidget::SetMousePos(FVector2D InMousePos) {
}

void UGSInputDisplayWidget::SetIsPress(bool InIsPress) {
}

void UGSInputDisplayWidget::SetAxisValue(FKey InKey, float InAxisValue) {
}


