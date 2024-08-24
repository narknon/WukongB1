#include "ProjWidgetInfo.h"

FProjWidgetInfo::FProjWidgetInfo() {
    this->Widget = NULL;
    this->RoundRect = NULL;
    this->UseRoundRectCalSize = false;
    this->HideRoundRect = NULL;
    this->NeedCheckProjView = false;
    this->ShowDistanceMax = 0.00f;
    this->UseDistanceZoom = false;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->ScaleRate = 0.00f;
    this->XMinScale = 0.00f;
    this->XMaxScale = 0.00f;
    this->YMinScale = 0.00f;
    this->YMaxScale = 0.00f;
}

