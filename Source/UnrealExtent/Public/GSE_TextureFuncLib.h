#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ColorBufferPtr.h"
#include "GSE_TextureFuncLib.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UObject;
class URuntimeVirtualTextureComponent;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_TextureFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_TextureFuncLib();

    UFUNCTION(BlueprintCallable)
    static void WriteToTexture_RenderingThread(UTexture2D* TargetTexture, const FColorBufferPtr& ColorBuffer, int32 Count, int32 MipMapIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteToTexture_GameThread(UTexture2D* TargetTexture, const FColorBufferPtr& ColorBuffer, int32 Count, int32 MipMapIndex);
    
    UFUNCTION(BlueprintCallable)
    static void StartCapturingStreamingTextureStats();
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseRenderTarget(UTextureRenderTarget2D* TextureRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static void OutputNonPowerOfTwoUdimVTInfo();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, const FString& FilePath, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void ExportColorDataAsPNG(int32 SrcWidth, int32 SrcHeight, const FString& FilePath, const FColorBufferPtr& ColorBuffer, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void EndCapturingStreamingTextureStats();
    
    UFUNCTION(BlueprintCallable)
    static void DumpStreamingTextureStats();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateTexture2DFromColorData(int32 SrcWidth, int32 SrcHeight, const TArray<FColor>& ColorData, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateTexture2D(int32 SrcWidth, int32 SrcHeight, const FString& Name, TEnumAsByte<EPixelFormat> InFormat);
    
    UFUNCTION(BlueprintCallable)
    static void CreateStaticTexture2D(UTextureRenderTarget2D* SourceRT, const FString& OutputPath, const FString& OutputFileName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, FLinearColor ClearColor);
    
    UFUNCTION(BlueprintCallable)
    static void CollectNonPowerOfTwoUdimVT();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMaterialInstanceDynamic* ChangeImageMaterial(UObject* WorldContextObject, UImage* Image, const FString& MatPath);
    
    UFUNCTION(BlueprintCallable)
    static void CaptureStreamingTextureStats();
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> CalculateAverageColorInTiles(UTexture2D* InTexture, FIntPoint TileCount, bool bDebugLog);
    
    UFUNCTION(BlueprintCallable)
    static void BuildStreamedLowMips(URuntimeVirtualTextureComponent* RVTComponent);
    
};

