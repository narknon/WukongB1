#include "GSScaleText.h"

UGSScaleText::UGSScaleText() {
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

void UGSScaleText::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UGSScaleText::SetUserSpecifiedScale(float InUserSpecifiedScale) {
}

void UGSScaleText::SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection) {
}

void UGSScaleText::SetStretch(TEnumAsByte<EStretch::Type> InStretch) {
}

void UGSScaleText::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
}

void UGSScaleText::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UGSScaleText::SetGSWidthOverride(float InGSWidthOverride) {
}

void UGSScaleText::SetGSMinDesiredWidth(float InGSMinDesiredWidth) {
}

void UGSScaleText::SetGSMinDesiredHeight(float InGSMinDesiredHeight) {
}

void UGSScaleText::SetGSMinAspectRatio(float InGSMinAspectRatio) {
}

void UGSScaleText::SetGSMaxDesiredWidth(float InGSMaxDesiredWidth) {
}

void UGSScaleText::SetGSMaxDesiredHeight(float InGSMaxDesiredHeight) {
}

void UGSScaleText::SetGSMaxAspectRatio(float InGSMaxAspectRatio) {
}

void UGSScaleText::SetGSHeightOverride(float InGSHeightOverride) {
}

void UGSScaleText::ClearGSWidthOverride() {
}

void UGSScaleText::ClearGSMinDesiredWidth() {
}

void UGSScaleText::ClearGSMinDesiredHeight() {
}

void UGSScaleText::ClearGSMinAspectRatio() {
}

void UGSScaleText::ClearGSMaxDesiredWidth() {
}

void UGSScaleText::ClearGSMaxDesiredHeight() {
}

void UGSScaleText::ClearGSMaxAspectRatio() {
}

void UGSScaleText::ClearGSHeightOverride() {
}


