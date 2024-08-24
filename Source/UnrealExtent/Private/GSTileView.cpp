#include "GSTileView.h"
#include "Templates/SubclassOf.h"

UGSTileView::UGSTileView() : UListView(FObjectInitializer::Get()) {
    this->EntryHeight = 128.00f;
    this->EntryWidth = 128.00f;
    this->TileAlignment = EListItemAlignment::EvenlyDistributed;
    this->TopSpacerSize = 0.00f;
    this->BottomSpacerSize = 0.00f;
    this->ShowScrollBar = false;
    this->bWrapHorizontalNavigation = false;
}

void UGSTileView::SetTopSpacerSize(float InTopSpacerSize) {
}

void UGSTileView::SetTopItemPosList(TArray<float> InChildsPosList) {
}

void UGSTileView::SetTileAlignment(EListItemAlignment InTileAlignment) {
}

void UGSTileView::SetShowScrollBar(bool InShowScrollBar) {
}

void UGSTileView::SetOrientation(TEnumAsByte<EOrientation> InOrientation) {
}

void UGSTileView::SetItemWidget(TSubclassOf<UUserWidget> InItemWidget) {
}

void UGSTileView::SetForceNeedTopSpacer(bool InForceNeedTopSpacer) {
}

void UGSTileView::SetForceNeedBottomSpacer(bool InForceNeedBottomSpacer) {
}

void UGSTileView::SetEntryWidth(float NewWidth) {
}

void UGSTileView::SetEntryHeight(float NewHeight) {
}

void UGSTileView::SetBottomSpacerSize(float InBottomSpacerSize) {
}

void UGSTileView::SetBottomItemPosList(TArray<float> InChildsPosList) {
}






void UGSTileView::InsertTopScrollWidget(UUserWidget* WidgetToInset) {
}

void UGSTileView::InsertBottomScrollWidget(UUserWidget* WidgetToInset) {
}

float UGSTileView::GetTopSpacerSize() const {
    return 0.0f;
}

float UGSTileView::GetFirstLine() {
    return 0.0f;
}

float UGSTileView::GetEntryWidth() const {
    return 0.0f;
}

float UGSTileView::GetEntryHeight() const {
    return 0.0f;
}

float UGSTileView::GetBottomSpacerSize() const {
    return 0.0f;
}

void UGSTileView::ClearTopScrollWidgets() {
}

void UGSTileView::ClearBottomScrollWidgets() {
}

void UGSTileView::ClearAllWidget() {
}

void UGSTileView::AddTopScrollWidget(UUserWidget* WidgetToAppend) {
}

void UGSTileView::AddBottomScrollWidget(UUserWidget* WidgetToAppend) {
}


