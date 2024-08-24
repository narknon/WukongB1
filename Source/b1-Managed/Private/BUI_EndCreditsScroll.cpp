#include "BUI_EndCreditsScroll.h"

UBUI_EndCreditsScroll::UBUI_EndCreditsScroll() {
    this->CacheCount = 5;
    this->CacheScrollSize = 2160;
    this->CurPageIdx = 0;
    this->ScrollOffset = 0.00f;
    this->ScrollSpeed = 100.00f;
    this->IsPlaying = false;
    this->IsEnding = false;
}


