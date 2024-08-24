#include "BUI_DependWidget.h"

UBUI_DependWidget::UBUI_DependWidget() {
    this->DependType = DependType::Auto;
    this->DependItem = NULL;
    this->NeedSafeZone = true;
    this->TickUpdatePos = false;
}

void UBUI_DependWidget::TryUpdateDependPos() {
}


