#include "SlateDebugInfo.h"

USlateDebugInfo::USlateDebugInfo() : UUserWidget(FObjectInitializer::Get()) {
    this->txt_Fps = NULL;
    this->txt_TickTime = NULL;
    this->txt_SlateRender = NULL;
    this->txt_WidgetRender = NULL;
    this->txt_Prepass = NULL;
    this->txt_NumBatches = NULL;
    this->txt_WidgetAllocSize = NULL;
    this->GetStatInfoInterval = 0.20f;
}


