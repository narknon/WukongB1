#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "OldMKSpawnTest.generated.h"

UCLASS(Blueprintable)
class AOldMKSpawnTest : public AActor {
    GENERATED_BODY()
public:
    AOldMKSpawnTest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorCS(TSubclassOf<AActor> ActorClass);
    
};

