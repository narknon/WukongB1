#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnvironmentSurfaceEffectMgr.h"
#include "BGUEnvironmentSurfaceEffectMgr.generated.h"

UCLASS(Blueprintable)
class ABGUEnvironmentSurfaceEffectMgr : public AEnvironmentSurfaceEffectMgr {
    GENERATED_BODY()
public:
    ABGUEnvironmentSurfaceEffectMgr(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

