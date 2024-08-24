#include "GSDispLib_PostProcessDebugger.h"

AGSDispLib_PostProcessDebugger::AGSDispLib_PostProcessDebugger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PPConf = NULL;
    this->PPContext = NULL;
    this->PPClass = NULL;
    this->ImageProcessorConfig = NULL;
    this->AutoBegin = false;
}

void AGSDispLib_PostProcessDebugger::StopEffect() {
}

void AGSDispLib_PostProcessDebugger::BeginEffect() {
}

void AGSDispLib_PostProcessDebugger::ReceiveTick_Implementation(float DeltaSeconds) {
}

void AGSDispLib_PostProcessDebugger::ReceiveBeginPlay_Implementation() {
}


