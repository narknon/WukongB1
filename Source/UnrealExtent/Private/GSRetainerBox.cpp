#include "GSRetainerBox.h"

UGSRetainerBox::UGSRetainerBox() {
    this->bRetainRender = true;
    this->RenderOnInvalidation = false;
    this->RenderOnPhase = true;
    this->Phase = 0;
    this->PhaseCount = 1;
    this->IsGSPixToPix = false;
    this->EffectMaterial = NULL;
    this->TextureParameter = TEXT("Texture");
}

void UGSRetainerBox::SetTextureParameter(FName NewTextureParameter) {
}

void UGSRetainerBox::SetRetainRendering(bool bInRetainRendering) {
}

void UGSRetainerBox::SetRenderingPhase(int32 RenderPhase, int32 TotalPhases) {
}

void UGSRetainerBox::SetEffectMaterial(UMaterialInterface* NewEffectMaterial) {
}

void UGSRetainerBox::RequestRender() {
}


UMaterialInstanceDynamic* UGSRetainerBox::GetEffectMaterial() const {
    return NULL;
}


