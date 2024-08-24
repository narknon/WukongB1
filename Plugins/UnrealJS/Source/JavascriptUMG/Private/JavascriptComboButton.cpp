#include "JavascriptComboButton.h"

UJavascriptComboButton::UJavascriptComboButton() {
    this->bIsFocusable = true;
    this->bHasDownArrow = true;
    this->MenuPlacement = MenuPlacement_ComboBox;
    this->HAlign = HAlign_Fill;
    this->VAlign = VAlign_Center;
}

void UJavascriptComboButton::SetIsOpen(bool InIsOpen, bool bFocusMenu) {
}


