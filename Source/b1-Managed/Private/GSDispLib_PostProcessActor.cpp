#include "GSDispLib_PostProcessActor.h"

AGSDispLib_PostProcessActor::AGSDispLib_PostProcessActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialPrototype = NULL;
    this->MaterialInstDynamic = NULL;
    this->PPContext = NULL;
    this->Progress = 0.00f;
    this->IsAutoPlay = false;
    this->Parameters = NULL;
    this->EffectID = 0;
}

void AGSDispLib_PostProcessActor::OnInit_Implementation(UGSDispLib_PostProcessContext* Context, FUDispLib_PostPorcessCommonConf Conf) {
}

void AGSDispLib_PostProcessActor::OnEndBegin_Implementation(UGSDispLib_PostProcessContext* Context) {
}

void AGSDispLib_PostProcessActor::OnEndFinish_Implementation(UGSDispLib_PostProcessContext* Context) {
}

void AGSDispLib_PostProcessActor::OnEffectTick_Implementation(float DeltaTime, float NewProgress, UGSDispLib_PostProcessContext* Context) {
}

void AGSDispLib_PostProcessActor::OnEnterBegin_Implementation(UGSDispLib_PostProcessContext* Context) {
}

void AGSDispLib_PostProcessActor::OnEnterFinish_Implementation(UGSDispLib_PostProcessContext* Context) {
}

void AGSDispLib_PostProcessActor::OnAlreadyBegin_Implementation(UGSDispLib_PostProcessContext* Context) {
}

void AGSDispLib_PostProcessActor::OnAlreadyFinish_Implementation(UGSDispLib_PostProcessContext* Context) {
}


