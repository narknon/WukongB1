#include "BUI_InputIconWidget.h"

UBUI_InputIconWidget::UBUI_InputIconWidget() {
    this->ShowType = EGSInputType::None;
    this->IsUsedInUI = false;
    this->IsNeedInteractEffect = false;
    this->IsNeedInteractTips = false;
    this->IsShowTips = false;
    this->TipsMode = UITipsMode::Upper;
}

void UBUI_InputIconWidget::UpdateGamepad() {
}

void UBUI_InputIconWidget::UpdateKeyboard() {
}


