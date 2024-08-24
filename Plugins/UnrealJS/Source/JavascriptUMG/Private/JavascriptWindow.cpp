#include "JavascriptWindow.h"

UJavascriptWindow::UJavascriptWindow() {
    this->Type = EJavascriptWindowType::Normal;
    this->bDragAnywhere = false;
    this->AutoCenter = EJavascriptAutoCenter::PreferredWorkArea;
    this->SupportsTransparency = EJavascriptWindowTransparency::None;
    this->InitialOpacity = 1.00f;
    this->IsInitiallyMaximized = false;
    this->SizingRule = EJavascriptSizingRule::UserSized;
    this->IsPopupWindow = false;
    this->FocusWhenFirstShown = true;
    this->ActivateWhenFirstShown = true;
    this->UseOSWindowBorder = false;
    this->HasCloseButton = true;
    this->SupportsMaximize = true;
    this->SupportsMinimize = true;
    this->CreateTitleBar = true;
    this->SaneWindowPlacement = true;
    this->IsTopmostWindow = false;
}

void UJavascriptWindow::ShowWindow() {
}

void UJavascriptWindow::SetOpacity(const float InOpacity) {
}

void UJavascriptWindow::Resize(FVector2D NewSize) {
}

void UJavascriptWindow::ReshapeWindow(FVector2D NewPosition, FVector2D NewSize) {
}

void UJavascriptWindow::RequestDestroyWindow() {
}

void UJavascriptWindow::MoveWindowTo(FVector2D NewPosition) {
}

void UJavascriptWindow::HideWindow() {
}

void UJavascriptWindow::FlashWindow() {
}

void UJavascriptWindow::EnableWindow(bool bEnable) {
}

void UJavascriptWindow::DestroyWindowImmediately() {
}

void UJavascriptWindow::BringToFront() {
}


