#include "GSInputWidget.h"

UGSInputWidget::UGSInputWidget() : UUserWidget(FObjectInitializer::Get()) {
}


bool UGSInputWidget::IsChildGSWidgetOf(UWidget* PossibleParent) {
    return false;
}


