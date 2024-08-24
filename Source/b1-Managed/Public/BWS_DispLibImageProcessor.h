#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BWS_DispLibImageProcessor.generated.h"

class UBWS_DispLibImageProcessorConfig;
class UMaterialInstanceDynamic;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UBWS_DispLibImageProcessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* KawaseBlurMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BlitMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CombineRGBMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CombineMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBWS_DispLibImageProcessorConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceTexName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShiftName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsFlipVerticalAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlendTexName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlendAlphaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BChannelName;
    
public:
    UBWS_DispLibImageProcessor();

    UFUNCTION(BlueprintCallable)
    void Blit(UTexture* SrcTex, UTexture* BlendTex, UTextureRenderTarget2D* DstTex, float BlendAlpha, bool IsFlipVerticalAxis);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Init(UObject* WorldContext, const FString& ConfigPath);
    
    UFUNCTION(BlueprintCallable)
    void KawaseBlur(UTexture* SrcTex, UTextureRenderTarget2D* DstTex, bool IsFlipVerticalAxis);
    
    UFUNCTION(BlueprintCallable)
    void CombileRGB(UTexture* RChannel, UTexture* GChannel, UTexture* BChannel, UTextureRenderTarget2D* DstTex, bool IsFlipVerticalAxis);
    
    UFUNCTION(BlueprintCallable)
    void InitParameters();
    
};

