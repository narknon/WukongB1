#include "BWS_DispLibImageProcessor.h"

UBWS_DispLibImageProcessor::UBWS_DispLibImageProcessor() {
    this->KawaseBlurMatInst = NULL;
    this->BlitMatInst = NULL;
    this->CombineRGBMatInst = NULL;
    this->CombineMatInst = NULL;
    this->Config = NULL;
    this->RenderTarget0 = NULL;
    this->RenderTarget1 = NULL;
}

void UBWS_DispLibImageProcessor::Blit(UTexture* SrcTex, UTexture* BlendTex, UTextureRenderTarget2D* DstTex, float BlendAlpha, bool IsFlipVerticalAxis) {
}

void UBWS_DispLibImageProcessor::Init(UObject* WorldContext, const FString& ConfigPath) {
}

void UBWS_DispLibImageProcessor::KawaseBlur(UTexture* SrcTex, UTextureRenderTarget2D* DstTex, bool IsFlipVerticalAxis) {
}

void UBWS_DispLibImageProcessor::CombileRGB(UTexture* RChannel, UTexture* GChannel, UTexture* BChannel, UTextureRenderTarget2D* DstTex, bool IsFlipVerticalAxis) {
}

void UBWS_DispLibImageProcessor::InitParameters() {
}


