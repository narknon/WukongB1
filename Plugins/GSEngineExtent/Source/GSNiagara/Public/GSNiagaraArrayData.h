#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GSNiagaraParticleInfo.h"
#include "GSNiagaraArrayData.generated.h"

UCLASS(Blueprintable)
class UGSNiagaraArrayData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSNiagaraParticleInfo> ParticleInfoArray;
    
    UGSNiagaraArrayData();

    UFUNCTION(BlueprintCallable)
    void UpdateParticle(TArray<FGSNiagaraParticleInfo> InParticleInfoArray);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveParticle(FGSNiagaraParticleInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetParticleSize(TArray<float> TargetSizeArray);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetParticlePos(TArray<FVector> TargetPosArray);
    
    UFUNCTION(BlueprintCallable)
    void ClearParticleArrayData();
    
    UFUNCTION(BlueprintCallable)
    bool AddParticle(FGSNiagaraParticleInfo Info);
    
};

