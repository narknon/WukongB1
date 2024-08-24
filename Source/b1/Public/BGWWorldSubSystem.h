#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BGWWorldSubSystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class B1_API UBGWWorldSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBGWWorldSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldComponentsUpdatedCS(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldBeginPlayCS(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetWorldRefCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoesSupportWorldTypeCS(int32 WorldType) const;
    
};

