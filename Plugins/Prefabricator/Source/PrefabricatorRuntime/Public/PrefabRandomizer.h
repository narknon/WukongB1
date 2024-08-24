#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabRandomizerCompleteBindableEventDelegate.h"
#include "PrefabRandomizer.generated.h"

class APrefabActor;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API APrefabRandomizer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeedOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBuildTimePerFrame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefabRandomizerCompleteBindableEvent OnRandomizationComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFastSyncBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APrefabActor*> ActorsToRandomize;
    
    APrefabRandomizer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Randomize(int32 InSeed);
    
};

