#include "BUC_DispLibUnitArtFresnelDataAsset.h"

UBUC_DispLibUnitArtFresnelDataAsset::UBUC_DispLibUnitArtFresnelDataAsset() {
    this->Time = 0.00f;
    this->OnePeriodTime = 0.00f;
    this->SimpleProgrammedCurve = false;
    this->FadeInTime = 0.00f;
    this->CommonTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->ProgrammedPowerMax = 0.00f;
    this->Loop = false;
    this->InvertGSArtFresnel = false;
    this->UseVertexNormalNotTex = true;
    this->UseContrastInsteadPower = false;
    this->BrightValue = 1.00f;
    this->DarkValue = 0.00f;
    this->GSArtFresnelPower = NULL;
    this->ClampGSArtFresnelDotProduct = true;
    this->UseHeightGradientRamp = false;
    this->BottomAlpha = 0.00f;
    this->TopAlpha = 0.00f;
    this->FColor_Out = NULL;
    this->FColor_In = NULL;
}


