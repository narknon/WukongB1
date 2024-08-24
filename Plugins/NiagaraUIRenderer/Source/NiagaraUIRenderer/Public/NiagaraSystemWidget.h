#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "SlateMeshData.h"
#include "NiagaraSystemWidget.generated.h"

class UNiagaraSystem;
class UNiagaraUIComponent;

UCLASS(Blueprintable)
class NIAGARAUIRENDERER_API UNiagaraSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystemReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickWhenPaused;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FakeDepthScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeDepthScaleDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GSIsNeedWidgetSizeParam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 GSVec4A;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 GSVec4B;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GSColorA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GSColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateMeshData> MeshData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraUIComponent* NiagaraComponent;
    
public:
    UNiagaraSystemWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateTickWhenPaused(bool NewTickWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNiagaraSystemReference(UNiagaraSystem* NewNiagaraSystem);
    
    UFUNCTION(BlueprintCallable)
    void SetGSVec4B(FVector4 InVec4);
    
    UFUNCTION(BlueprintCallable)
    void SetGSVec4A(FVector4 InVec4);
    
    UFUNCTION(BlueprintCallable)
    void SetGSColorB(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetGSColorA(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void ReInitSystem();
    
    UFUNCTION(BlueprintCallable)
    void GSStopFX(bool IsReset);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValVector4(const FString& InName, FVector4 InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValVector2(const FString& InName, FVector2D InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValVector(const FString& InName, FVector InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValLinearColor(const FString& InName, FLinearColor InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValInt(const FString& InName, int32 InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValFloat(const FString& InName, float InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSSetNiagaraValBool(const FString& InName, bool InVal);
    
    UFUNCTION(BlueprintCallable)
    void GSResumeFX();
    
    UFUNCTION(BlueprintCallable)
    void GSPlayFX(bool IsReset);
    
    UFUNCTION(BlueprintCallable)
    void GSPauseFX();
    
    UFUNCTION(BlueprintCallable)
    void GSDestoryFX();
    
    UFUNCTION(BlueprintCallable)
    void GSActiveFX(bool IsActive, bool IsReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraUIComponent* GetNiagaraComponent();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSystem();
    
    UFUNCTION(BlueprintCallable)
    void ActivateSystem(bool Reset);
    
};

