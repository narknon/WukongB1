#include "GSBackGround.h"

UGSBackGround::UGSBackGround() {
    this->IsBlockTouch = true;
    this->IsWithBlur = true;
    this->IsWithMask = false;
    this->TweenInTime = 0.30f;
    this->TweenFunc = EEasingFunc::EaseOut;
}


