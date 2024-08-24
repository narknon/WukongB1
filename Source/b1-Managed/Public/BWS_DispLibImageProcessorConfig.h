#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BWS_DispLibImageProcessorConfig.generated.h"

class UMaterialInstance;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UBWS_DispLibImageProcessorConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* KawaseMaterialPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* BlitMaterialPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CombineRGBMaterialPrototype;
    
    UBWS_DispLibImageProcessorConfig();

};

