#include "JavascriptWidget.h"
#include "Blueprint/WidgetTree.h"

UJavascriptWidget::UJavascriptWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetTree = CreateDefaultSubobject<UWidgetTree>(TEXT("WidgetTree"));
    this->JavascriptContext = NULL;
    this->ContentSlot = NULL;
}

void UJavascriptWidget::SetRootWidget(UWidget* Widget) {
}

bool UJavascriptWidget::RemoveChild() {
    return false;
}

void UJavascriptWidget::OnReleaseInputActionByName_Implementation(FName ActionName) {
}

void UJavascriptWidget::OnListenForInputAxis(FName AxisName, TEnumAsByte<EInputEvent> EventType, bool bConsume) {
}

void UJavascriptWidget::OnListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume) {
}

void UJavascriptWidget::OnInputAxisByName_Implementation(float Axis, FName ActionName) {
}

void UJavascriptWidget::OnInputActionByName_Implementation(FName ActionName) {
}


bool UJavascriptWidget::HasValidCachedWidget(UWidget* Widget) {
    return false;
}

void UJavascriptWidget::CallSynchronizeProperties(UVisual* WidgetOrSlot) {
}

UPanelSlot* UJavascriptWidget::AddChild(UWidget* Content) {
    return NULL;
}


