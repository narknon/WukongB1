#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "BaseActorComp.generated.h"

class UActorCompContainer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBaseActorComp : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogLvl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorCompContainer* ActorCompContainer;
    
public:
    UBaseActorComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitPropertiesCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnregisterCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegisterCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeCS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLogLvl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPlayInCS(const EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWorldOffsetCS(const FVector& InOffset, bool bWorldShift);
    
};

