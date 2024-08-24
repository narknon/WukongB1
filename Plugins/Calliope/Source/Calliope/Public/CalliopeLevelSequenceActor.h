#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "CalliopeLevelSequenceActor.generated.h"

class AActor;
class ULevelSequence;
class UMeshComponent;

UCLASS(Blueprintable)
class CALLIOPE_API ACalliopeLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTime;
    
public:
    ACalliopeLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bInPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPerformerTickEnabled(bool bEnable, TSet<AActor*>& OutPerformers);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshPropertyInSequence(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReSetSequence(ULevelSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void MeshSetClothLocalSpaceSimulation(UMeshComponent* Mesh, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void MeshPrestreamTextures(UMeshComponent* Mesh, float DurationTimeSeconds, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void LocateBoundActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBindingTags(TSet<FName>& OutBindingTags) const;
    
    UFUNCTION(BlueprintCallable)
    void BindActorsByTag(const TMap<FName, AActor*>& TagActors);
    
    UFUNCTION(BlueprintCallable)
    void BindActorByName(const FName& BindingName, AActor* BindingActor);
    
};

