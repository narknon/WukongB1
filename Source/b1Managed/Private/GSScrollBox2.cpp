#include "GSScrollBox2.h"

UGSScrollBox::UGSScrollBox() {
    this->UseGamepadInput = true;
    this->UseComb = false;
    this->NeedTouch = true;
    this->Orientation = Orient_Horizontal;
    this->TopSpacerLength = 0.00f;
    this->BottomSpacerLength = 0.00f;
    this->NavigationPadding = 0.00f;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->AlwayShowScrollBar = false;
    this->RetainerBox = NULL;
    this->ScrollConsumeType = ScrollConsumeType::Normal;
    this->AlwayNeedUpdateParams = false;
    this->NeedUpdateParams = false;
}

void UGSScrollBox::ScrollOffsetChanged(float CurrentOffset) {
}

void UGSScrollBox::OnMouseLeave_Implementation(const FPointerEvent& MouseEvent) {
}

void UGSScrollBox::OnMouseEnter_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
}


