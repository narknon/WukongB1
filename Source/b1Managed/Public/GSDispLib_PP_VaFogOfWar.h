#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSDispLib_PostProcessActor.h"
#include "UDispLib_PostPorcessCommonConf.h"
#include "GSDispLib_PP_VaFogOfWar.generated.h"

class UGSDispLib_PostProcessContext;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class AGSDispLib_PP_VaFogOfWar : public AGSDispLib_PostProcessActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FoWTex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FoWTex2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FoWTex3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FoWOpaqueColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FoWTranslucentColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWTexName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWTex2Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWOpaqueColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWTranslucentColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWVolumePosSizeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWIsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoWCombineTexName;
    
public:
    AGSDispLib_PP_VaFogOfWar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInit(UGSDispLib_PostProcessContext* Context, FUDispLib_PostPorcessCommonConf Conf);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndBegin(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndFinish(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterBegin(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectTick(float DeltaTime, float NewProgress, UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterFinish(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAlreadyBegin(UGSDispLib_PostProcessContext* Context);
    
};

