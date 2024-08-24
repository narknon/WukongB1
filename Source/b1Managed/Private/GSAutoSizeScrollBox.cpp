#include "GSAutoSizeScrollBox.h"
#include "Types/SlateEnums.h"

UGSAutoSizeScrollBox::UGSAutoSizeScrollBox() {
    this->Orientation = Orient_Vertical;
    this->ContentSizeBox = NULL;
    this->OrderSetting = OrderSetting::Baseline;
    this->Baseline = 0.00f;
    this->UsePaddingCurve = false;
    this->PaddingCurve = NULL;
    this->UseCurveScale = false;
    this->ScaleCurve = NULL;
    this->UseRenderScale = false;
    this->ScaleMaxLength = 300.00f;
    this->OverScrollOffset = 400.00f;
}


