#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "ReplicationTest.generated.h"

UCLASS(Blueprintable)
class AReplicationTest : public ADefaultPawn {
    GENERATED_BODY()
public:
    AReplicationTest(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PrintInServer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PrintMulticast();
    
    UFUNCTION(BlueprintCallable)
    void RunPrintInServer();
    
};

