#include "GSWidgetRender.h"

UGSWidgetRender::UGSWidgetRender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetClass = NULL;
    this->RenderTarget = NULL;
    this->bApplyGammaCorrection = false;
    this->bIsAutoUpdate = false;
    this->bIsUseViewPortWindowSize = true;
    this->InstWidget = NULL;
}

void UGSWidgetRender::UpdateRenderTarget2D() {
}

UUserWidget* UGSWidgetRender::GetUserWidgetObject() const {
    return NULL;
}


