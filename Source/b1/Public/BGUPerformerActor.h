#pragma once
#include "CoreMinimal.h"
#include "CalliopeSequencePerformer.h"
#include "BGUActorBase.h"
#include "BGUPerformerActor.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class B1_API ABGUPerformerActor : public ABGUActorBase, public ICalliopeSequencePerformer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    ABGUPerformerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOptimizeEnabled(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

