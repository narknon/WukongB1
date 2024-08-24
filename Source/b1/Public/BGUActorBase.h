#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BGUActorI.h"
#include "ECSNetSerialization.h"
#include "BGUActorBase.generated.h"

class UActorCompContainer;
class UActorComponent;
class UBUS_EventCollection;
class UBaseActorComp;
class USceneComponent;

UCLASS(Blueprintable)
class B1_API ABGUActorBase : public AActor, public IBGUActorI, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBeginPlayFromLevelStreaming;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainer* ActorCompContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBUS_EventCollection* EventCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullyInit;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FECSNetSerialization ECSDataNetSerialization;
    
    ABGUActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTeamID(int32 ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRootComponentCS(USceneComponent* NewRootComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetCompCanEverAffectNavigation(UActorComponent* ActorComponent, bool bRelevant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostEditMove(bool bFinish);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionCS(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetTeamIDCS() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamID() const;
    
    UFUNCTION(BlueprintCallable)
    UBUS_EventCollection* GetBUSEventCollection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetActorGuidCS(FString& OutActorGuid) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorGuid(FString& OutActorGuid) const;
    
    UFUNCTION(BlueprintCallable)
    void FullyInit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceRefreshDetailView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable)
    void AttachBaseActorComp(UBaseActorComp* Comp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWorldOffsetCS(const FVector& InOffset, bool bWorldShift);
    

    // Fix for true pure virtual functions not being implemented
};

