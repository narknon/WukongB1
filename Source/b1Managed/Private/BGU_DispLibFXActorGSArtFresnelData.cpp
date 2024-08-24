#include "BGU_DispLibFXActorGSArtFresnelData.h"

UBGU_DispLibFXActorGSArtFresnelData::UBGU_DispLibFXActorGSArtFresnelData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->FirstDelayTime = 0.00f;
    this->Time = 0.00f;
    this->OnePeriodTime = 0.00f;
    this->Loop = false;
    this->InvertGSArtFresnel = false;
    this->UseVertexNormalNotTex = false;
    this->UseContrastInsteadPower = false;
    this->BrightValue = 0.00f;
    this->DarkValue = 0.00f;
    this->GSArtFresnelPower = NULL;
    this->ClampGSArtFresnelDotProduct = false;
    this->UseHeightGradientRamp = false;
    this->BottomAlpha = 0.00f;
    this->TopAlpha = 0.00f;
    this->FColor_Out = NULL;
    this->FColor_In = NULL;
}


