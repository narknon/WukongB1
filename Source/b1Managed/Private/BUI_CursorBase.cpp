#include "BUI_CursorBase.h"

UBUI_CursorBase::UBUI_CursorBase() {
    this->IsForceShowCursor = false;
    this->IsShowImgCursor = false;
    this->CursorRadius = 0.00f;
    this->MovePower = 0.00f;
    this->ResistancePower = 0.00f;
    this->GravitationPowerCurve = NULL;
    this->CursorMoveDelay = 0.00f;
    this->MouseCanvasOffsetCoe = 0.00f;
    this->ScrollCanvasOffsetCoe = 0.00f;
}


