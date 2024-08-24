#include "GSTileView2.h"

UGSTileView::UGSTileView() {
    this->Orientation = Orient_Vertical;
    this->ShowScrollBar = false;
    this->TileAlignment = EListItemAlignment::EvenlyDistributed;
    this->ItemWidget = NULL;
    this->LineWidget = NULL;
    this->MarkerWidget = NULL;
    this->TopSpacerLength = 0.00f;
    this->BottomSpacerLength = 0.00f;
    this->RetainerBox = NULL;
    this->UseGamepadInput = false;
    this->NeedTouch = true;
    this->NeedUpdateParams = false;
}

void UGSTileView::PreConstruct_Implementation(bool IsDesignTime) {
}

void UGSTileView::OnMouseLeave_Implementation(const FPointerEvent& MouseEvent) {
}

void UGSTileView::OnMouseEnter_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
}


