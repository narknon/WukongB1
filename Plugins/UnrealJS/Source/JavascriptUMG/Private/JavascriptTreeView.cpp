#include "JavascriptTreeView.h"

UJavascriptTreeView::UJavascriptTreeView(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->JavascriptContext = NULL;
    this->SelectionMode = ESelectionMode::Single;
}

void UJavascriptTreeView::SetSingleExpandedItem(UObject* InItem) {
}

void UJavascriptTreeView::SetSelection_Implementation(UObject* SoleSelectedItem) {
}

void UJavascriptTreeView::SetItemExpansion(UObject* InItem, bool InShouldExpandItem) {
}

void UJavascriptTreeView::SetDoubleClickSelection(UObject* SelectedItem) {
}

void UJavascriptTreeView::RequestTreeRefresh() {
}



bool UJavascriptTreeView::IsItemExpanded(UObject* InItem) {
    return false;
}

bool UJavascriptTreeView::IsDoubleClickSelection(UObject* SelectedItem) {
    return false;
}

bool UJavascriptTreeView::GetSelectedItems_Implementation(TArray<UObject*>& OutItems) {
    return false;
}

void UJavascriptTreeView::GetDoubleClickedItems(TArray<UObject*>& OutItems) {
}

void UJavascriptTreeView::ClearDoubleClickSelection() {
}


