#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ContentWidget.h"
#include "GSRetainerBox.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSRetainerBox : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetainRender;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RenderOnInvalidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RenderOnPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGSPixToPix;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameter;
    
public:
    UGSRetainerBox();

    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(FName NewTextureParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetRetainRendering(bool bInRetainRendering);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectMaterial(UMaterialInterface* NewEffectMaterial);
    
    UFUNCTION(BlueprintCallable)
    void RequestRender();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewWidgetSizeChangedEvent(FVector2D Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetEffectMaterial() const;
    
};

