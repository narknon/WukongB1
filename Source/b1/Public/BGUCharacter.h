#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "BGUActorI.h"
#include "BGUReplicatedAcceleration.h"
#include "ECSNetSerialization.h"
#include "UStGSNotifyStateCache.h"
#include "BGUCharacter.generated.h"

class ABGUTamerBase;
class AController;
class APlayerController;
class UAIPerceptionStimuliSourceComponent;
class UActorCompContainer;
class UActorComponent;
class UAnimMontage;
class UBGUDataComp;
class UBGURootMotionFollowMovementComponent;
class UBUS_EventCollection;
class UBaseActorComp;
class UCapsuleComponent;
class UInputComponent;
class UNetConnection;

UCLASS(Blueprintable)
class B1_API ABGUCharacter : public ACharacter, public IBGUActorI, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainer* ActorCompContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBGUDataComp* BGUDataComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBUS_EventCollection* EventCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullyInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferActorRotToControlRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ViewRotationYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAcceleration, meta=(AllowPrivateAccess=true))
    FBGUReplicatedAcceleration ReplicatedAcceleration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GSNetInitFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FECSNetSerialization ECSDataNetSerialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* AnimCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBGURootMotionFollowMovementComponent* AnimMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBeginPlayFromLevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUTamerBase* TamerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamIDDeprecate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUStGSNotifyStateCache> BranchPointNotifyStateCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HostSyncMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostSyncMontageStartTime;
    
public:
    ABGUCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    UAnimMontage* TryGetHostSyncMontage();
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* TryGetComponentByName(const FName& CompName);
    
    UFUNCTION(BlueprintCallable)
    void SwitchNetRoleOnly(bool HasAuthority);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRotationYawOffset(float NewOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPlayerInputComponentCS(UInputComponent* PlayerInputComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTeamID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetTamerOwner(ABGUTamerBase* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferActorRotToControlRot(bool bValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreDestroyFromReplicationCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostNetReceiveRoleCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAcceleration();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_PlayerStateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPossessedCS(AController* NewController);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementModeChangedCS(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGuestSyncMontage(UAnimMontage* _HostSyncMontage, float _HostSyncMontageStartTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionCS(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorChannelOpen(UNetConnection* Connection);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveGuestSyncMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerCharacterCS();
    
    UFUNCTION(BlueprintCallable)
    bool IsInGuestSyncMontage();
    
    UFUNCTION(BlueprintCallable)
    void GSSwapNetRoleCS(bool HasAuthority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewRotationYawOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABGUTamerBase* GetTamerOwner() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHostSyncMontageSyncStartTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APlayerController* GetGSAuthorityPlayerCS();
    
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
    
    UFUNCTION(BlueprintCallable)
    void ForceSpawnDefaultControllerCS();
    
    UFUNCTION(BlueprintCallable)
    void CallPostNetInit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttachBaseActorComp(UBaseActorComp* Comp);
    

    // Fix for true pure virtual functions not being implemented
};

