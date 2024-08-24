#include "JavascriptIntSpinBox.h"

UJavascriptIntSpinBox::UJavascriptIntSpinBox() {
    this->Value = 0;
    this->Style = NULL;
    this->Delta = 0;
    this->SliderExponent = 1;
    this->Justification = ETextJustify::Left;
    this->MinDesiredWidth = 0;
    this->ClearKeyboardFocusOnCommit = false;
    this->SelectAllTextOnCommit = true;
    this->bOverride_MinValue = false;
    this->bOverride_MaxValue = false;
    this->bOverride_MinSliderValue = false;
    this->bOverride_MaxSliderValue = false;
    this->MinValue = 0;
    this->MaxValue = 10;
    this->MinSliderValue = 0;
    this->MaxSliderValue = 0;
}

void UJavascriptIntSpinBox::SetValue(int32 NewValue) {
}

void UJavascriptIntSpinBox::SetMinValue(int32 NewValue) {
}

void UJavascriptIntSpinBox::SetMinSliderValue(int32 NewValue) {
}

void UJavascriptIntSpinBox::SetMaxValue(int32 NewValue) {
}

void UJavascriptIntSpinBox::SetMaxSliderValue(int32 NewValue) {
}

void UJavascriptIntSpinBox::SetForegroundColor(FSlateColor InForegroundColor) {
}

int32 UJavascriptIntSpinBox::GetValue() const {
    return 0;
}

int32 UJavascriptIntSpinBox::GetMinValue() const {
    return 0;
}

int32 UJavascriptIntSpinBox::GetMinSliderValue() const {
    return 0;
}

int32 UJavascriptIntSpinBox::GetMaxValue() const {
    return 0;
}

int32 UJavascriptIntSpinBox::GetMaxSliderValue() const {
    return 0;
}

void UJavascriptIntSpinBox::ClearMinValue() {
}

void UJavascriptIntSpinBox::ClearMinSliderValue() {
}

void UJavascriptIntSpinBox::ClearMaxValue() {
}

void UJavascriptIntSpinBox::ClearMaxSliderValue() {
}


