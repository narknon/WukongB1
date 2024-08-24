#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructGCTest.generated.h"

class UStaticMeshComponent;
class UStructTestDataAsset;
class UTestQueueData;

UCLASS(Blueprintable)
class AStructGCTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStructTestDataAsset* DA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoGCCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SMCActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTestQueueData* QueueData;
    
    AStructGCTest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DoInit();
    
    UFUNCTION(BlueprintCallable)
    void DoCheck();
    
    UFUNCTION(BlueprintCallable)
    void DestroyFX();
    
};

