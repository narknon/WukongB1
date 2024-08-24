#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECSNetSerialization.h"
#include "BGPPlayerReverseReplicator.generated.h"

class ABGUCharacter;

UCLASS(Blueprintable)
class B1_API ABGPPlayerReverseReplicator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FECSNetSerialization ECSDataNetSerialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacter* OwnerBGUChr;
    
    ABGPPlayerReverseReplicator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOwnerBGUChr(ABGUCharacter* BGUOwner);
    
};

