#include "GSBitmapFontBox.h"

UGSBitmapFontBox::UGSBitmapFontBox() {
    this->Font = NULL;
    this->Text = FText::FromString(TEXT("GSText"));
    this->FontScaleFactor = 1.00f;
    this->CharSpacing = 0.00f;
    this->Justification = EGSBitmapJustification::Left;
}

void UGSBitmapFontBox::SetText(FText InText) {
}


