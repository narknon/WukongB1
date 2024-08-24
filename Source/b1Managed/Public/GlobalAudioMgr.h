#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlobalAudioMgr.generated.h"

class UApplicationLifecycleComponent;

UCLASS(Blueprintable)
class AGlobalAudioMgr : public AActor {
    GENERATED_BODY()
public:
    AGlobalAudioMgr(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    UApplicationLifecycleComponent* GetUApplicationLifecycleComponent();
    
};

