#include "BUI_LoopWidget.h"

UBUI_LoopWidget::UBUI_LoopWidget() {
    this->ActiveLoop = true;
    this->NeedAdaptive = false;
    this->LoopDirection = LoopDirection::LeftToRight;
    this->Wait = 0.00f;
    this->Delay = 0.00f;
    this->ScrollSpeed = 0.00f;
    this->Content = NULL;
    this->MaxDesiredWidget = 0.00f;
    this->CurLoopDirection = LoopDirection::LeftToRight;
    this->Time = 0.00f;
    this->Distance = 0.00f;
}

bool UBUI_LoopWidget::Reset() {
    return false;
}

bool UBUI_LoopWidget::GetActiveLoop() {
    return false;
}

void UBUI_LoopWidget::SetActiveLoop(bool InActiveLoop) {
}


