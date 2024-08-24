#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BGWTickableWorldSubSystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class B1_API UBGWTickableWorldSubSystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UBGWTickableWorldSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldComponentsUpdatedCS(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldBeginPlayCS(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetWorldRefCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoesSupportWorldTypeCS(int32 WorldType) const;
    
};

