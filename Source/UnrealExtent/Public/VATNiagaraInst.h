#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VATNiagaraInst.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API AVATNiagaraInst : public AActor {
    GENERATED_BODY()
public:
    AVATNiagaraInst(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVATAnim();
    
    UFUNCTION(BlueprintCallable)
    void UpdateNiagaraVectorVariable(const FString& VariableName, const FVector TargetValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNiagaraVector2Variable(const FString& VariableName, const FVector2D TargetValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNiagaraFloatVariable(const FString& VariableName, const float TargetValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetVATAnim();
    
    UFUNCTION(BlueprintCallable)
    void ResetNiagaraSystem();
    
    UFUNCTION(BlueprintCallable)
    void InitVATNiagaraInst();
    
};

