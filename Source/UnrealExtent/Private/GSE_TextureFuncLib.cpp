#include "GSE_TextureFuncLib.h"

UGSE_TextureFuncLib::UGSE_TextureFuncLib() {
}

void UGSE_TextureFuncLib::WriteToTexture_RenderingThread(UTexture2D* TargetTexture, const FColorBufferPtr& ColorBuffer, int32 Count, int32 MipMapIndex) {
}

bool UGSE_TextureFuncLib::WriteToTexture_GameThread(UTexture2D* TargetTexture, const FColorBufferPtr& ColorBuffer, int32 Count, int32 MipMapIndex) {
    return false;
}

void UGSE_TextureFuncLib::StartCapturingStreamingTextureStats() {
}

void UGSE_TextureFuncLib::ReleaseRenderTarget(UTextureRenderTarget2D* TextureRenderTarget) {
}

void UGSE_TextureFuncLib::OutputNonPowerOfTwoUdimVTInfo() {
}

void UGSE_TextureFuncLib::ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, const FString& FilePath, const FString& Filename) {
}

void UGSE_TextureFuncLib::ExportColorDataAsPNG(int32 SrcWidth, int32 SrcHeight, const FString& FilePath, const FColorBufferPtr& ColorBuffer, int32 Count) {
}

void UGSE_TextureFuncLib::EndCapturingStreamingTextureStats() {
}

void UGSE_TextureFuncLib::DumpStreamingTextureStats() {
}

UTexture2D* UGSE_TextureFuncLib::CreateTexture2DFromColorData(int32 SrcWidth, int32 SrcHeight, const TArray<FColor>& ColorData, const FString& Name) {
    return NULL;
}

UTexture2D* UGSE_TextureFuncLib::CreateTexture2D(int32 SrcWidth, int32 SrcHeight, const FString& Name, TEnumAsByte<EPixelFormat> InFormat) {
    return NULL;
}

void UGSE_TextureFuncLib::CreateStaticTexture2D(UTextureRenderTarget2D* SourceRT, const FString& OutputPath, const FString& OutputFileName) {
}

UTextureRenderTarget2D* UGSE_TextureFuncLib::CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, FLinearColor ClearColor) {
    return NULL;
}

void UGSE_TextureFuncLib::CollectNonPowerOfTwoUdimVT() {
}

UMaterialInstanceDynamic* UGSE_TextureFuncLib::ChangeImageMaterial(UObject* WorldContextObject, UImage* Image, const FString& MatPath) {
    return NULL;
}

void UGSE_TextureFuncLib::CaptureStreamingTextureStats() {
}

TArray<float> UGSE_TextureFuncLib::CalculateAverageColorInTiles(UTexture2D* InTexture, FIntPoint TileCount, bool bDebugLog) {
    return TArray<float>();
}

void UGSE_TextureFuncLib::BuildStreamedLowMips(URuntimeVirtualTextureComponent* RVTComponent) {
}


