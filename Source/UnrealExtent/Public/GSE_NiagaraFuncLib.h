#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NiagaraCommon.h"
#include "EEffectTypeManagerCullMode.h"
#include "GSE_NiagaraFuncLib.generated.h"

class UNiagaraComponent;
class UTexture;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_NiagaraFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_NiagaraFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetTextureParameterValueOnMeshRenderMaterials(UNiagaraComponent* NiagaraComponent, const FName& ParameterName, UTexture* ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectTypeManagerState(EEffectTypeManagerCullMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    static ENCPoolMethod GetNiagaraComponentPoolMethod(UNiagaraComponent* NC);
    
    UFUNCTION(BlueprintCallable)
    static void ForceDestroyNiagaraComponent(UNiagaraComponent* NC);
    
};

