#include "BUI_BarCSharp.h"

UBUI_BarCSharp::UBUI_BarCSharp() {
    this->CurValue = 0.00f;
    this->CurMaxValue = 0.00f;
    this->IS_SHOW_U_INTER_TOTAL_NUM = false;
    this->IS_SHOW_BAR_VALUE_NUM = false;
    this->CONF_INTER_PLAY_TIME = 0.00f;
    this->CONF_INTER_TIME_COUNT = 0.00f;
    this->UninterruptMaxValue = 0.00f;
    this->FloatBarCls = NULL;
}

void UBUI_BarCSharp::ValueDecrease(float DecreaseValueIn) {
}

void UBUI_BarCSharp::ValueIncrease(float IncreaseValueIn) {
}

void UBUI_BarCSharp::ChangeMaxValue(float InValue) {
}

void UBUI_BarCSharp::BarChangeValue(float ChangeValue) {
}

float UBUI_BarCSharp::CalcCurBarLength() {
    return 0.0f;
}

void UBUI_BarCSharp::UpdateBarByValue(UNamedSlot* inBarSlot, float InValue) {
}

void UBUI_BarCSharp::UpdateBarByLength(UWidget* InBarWidget, float InBarLength) {
}

void UBUI_BarCSharp::UpdateCurMaxValue(float InValue) {
}

void UBUI_BarCSharp::UninterruptDecrease(float DecreaseValueIn) {
}

float UBUI_BarCSharp::CalcBarLengthByValue(float InValue) {
    return 0.0f;
}

void UBUI_BarCSharp::InitSetCurAndMaxValue(float InMaxValue, float InCurValue, bool InIsReCalcMaxLen) {
}

void UBUI_BarCSharp::UpdateBarWithCurLength(UNamedSlot* inBarSlot) {
}

void UBUI_BarCSharp::PlayUninterruptBarAnimation() {
}


