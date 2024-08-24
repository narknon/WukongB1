#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DispLibDebugTest_SpawnAttachedNiagara.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class ADispLibDebugTest_SpawnAttachedNiagara : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Template;
    
    ADispLibDebugTest_SpawnAttachedNiagara(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnNS();
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool vis, bool Child);
    
};

