#include "GSScrollBox.h"
#include "Layout/Clipping.h"

UGSScrollBox::UGSScrollBox() {
    this->bIsVariable = false;
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->BarStyle = NULL;
    this->Orientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->AlwaysShowScrollbar = false;
    this->AlwaysShowScrollbarTrack = false;
    this->NavCanLoop = false;
}

void UGSScrollBox::SetTopSpacer(float InTopSpacer) {
}

void UGSScrollBox::SetTargetScrollOffset(float InTargetScrollOffset) {
}

void UGSScrollBox::SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges) {
}

void UGSScrollBox::SetScrollOffset(float InScrollOffset) {
}

void UGSScrollBox::SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility) {
}

void UGSScrollBox::SetScrollbarThickness(const FVector2D& NewScrollbarThickness) {
}

void UGSScrollBox::SetScrollbarPadding(const FMargin& NewScrollbarPadding) {
}

void UGSScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation) {
}

void UGSScrollBox::SetNavigationScrollPadding(const float NewNavigationScrollPadding) {
}

void UGSScrollBox::SetNavigationDestination(const EDescendantScrollDestination NewNavigationDestination) {
}

void UGSScrollBox::SetNavCanLoop(bool InNavCanLoop) {
}

void UGSScrollBox::SetBottomSpacer(float InBottomSpacer) {
}

void UGSScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
}

void UGSScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding) {
}

float UGSScrollBox::GetViewOffsetFraction() const {
    return 0.0f;
}

float UGSScrollBox::GetTopSpacer() {
    return 0.0f;
}

float UGSScrollBox::GetScrollOffsetOfEnd() const {
    return 0.0f;
}

float UGSScrollBox::GetScrollOffset() const {
    return 0.0f;
}

float UGSScrollBox::GetScrollContentWithOutSpacer() const {
    return 0.0f;
}

float UGSScrollBox::GetScrollContent() const {
    return 0.0f;
}

float UGSScrollBox::GetBottomSpacer() {
    return 0.0f;
}


