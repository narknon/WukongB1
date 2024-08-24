#include "GSRichScaleText.h"

UGSRichScaleText::UGSRichScaleText() {
    this->UseIndent = false;
    this->GSWidthOverride = 0.00f;
    this->GSHeightOverride = 0.00f;
    this->GSMinDesiredWidth = 0.00f;
    this->GSMinDesiredHeight = 0.00f;
    this->GSMaxDesiredWidth = 0.00f;
    this->GSMaxDesiredHeight = 0.00f;
    this->GSMinAspectRatio = 0.00f;
    this->GSMaxAspectRatio = 0.00f;
    this->bOverride_GSWidthOverride = false;
    this->bOverride_GSHeightOverride = false;
    this->bOverride_GSMinDesiredWidth = false;
    this->bOverride_GSMinDesiredHeight = false;
    this->bOverride_GSMaxDesiredWidth = false;
    this->bOverride_GSMaxDesiredHeight = false;
    this->bOverride_GSMinAspectRatio = false;
    this->bOverride_GSMaxAspectRatio = false;
    this->Stretch = EStretch::None;
    this->StretchDirection = EStretchDirection::Both;
    this->UserSpecifiedScale = 0.00f;
    this->IgnoreInheritedScale = false;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UGSRichScaleText::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UGSRichScaleText::SetUserSpecifiedScale(float InUserSpecifiedScale) {
}

void UGSRichScaleText::SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection) {
}

void UGSRichScaleText::SetStretch(TEnumAsByte<EStretch::Type> InStretch) {
}

void UGSRichScaleText::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
}

void UGSRichScaleText::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UGSRichScaleText::SetGSWidthOverride(float InGSWidthOverride) {
}

void UGSRichScaleText::SetGSMinDesiredWidth(float InGSMinDesiredWidth) {
}

void UGSRichScaleText::SetGSMinDesiredHeight(float InGSMinDesiredHeight) {
}

void UGSRichScaleText::SetGSMinAspectRatio(float InGSMinAspectRatio) {
}

void UGSRichScaleText::SetGSMaxDesiredWidth(float InGSMaxDesiredWidth) {
}

void UGSRichScaleText::SetGSMaxDesiredHeight(float InGSMaxDesiredHeight) {
}

void UGSRichScaleText::SetGSMaxAspectRatio(float InGSMaxAspectRatio) {
}

void UGSRichScaleText::SetGSHeightOverride(float InGSHeightOverride) {
}

void UGSRichScaleText::ClearGSWidthOverride() {
}

void UGSRichScaleText::ClearGSMinDesiredWidth() {
}

void UGSRichScaleText::ClearGSMinDesiredHeight() {
}

void UGSRichScaleText::ClearGSMinAspectRatio() {
}

void UGSRichScaleText::ClearGSMaxDesiredWidth() {
}

void UGSRichScaleText::ClearGSMaxDesiredHeight() {
}

void UGSRichScaleText::ClearGSMaxAspectRatio() {
}

void UGSRichScaleText::ClearGSHeightOverride() {
}


