#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VFXAutoPlayer.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class AVFXAutoPlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> InternalPlayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMovingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMovingSpeed;
    
    AVFXAutoPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopPlaying();
    
    UFUNCTION(BlueprintCallable)
    void StartPlaying();
    
    UFUNCTION(BlueprintCallable)
    void PlayNiagara(int32 InTargetNiagaraPtr);
    
    UFUNCTION(BlueprintCallable)
    bool ListCompletedPlaying();
    
    UFUNCTION(BlueprintCallable)
    TArray<UNiagaraSystem*> GetInternalPlayList();
    
    UFUNCTION(BlueprintCallable)
    void FlushPlaying();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllNiagaras();
    
    UFUNCTION(BlueprintCallable)
    bool CurNiagaraStatusChanged(bool& bNumDecreased);
    
    UFUNCTION(BlueprintCallable)
    void BuildPlayList(const FString& InFolder);
    
};

