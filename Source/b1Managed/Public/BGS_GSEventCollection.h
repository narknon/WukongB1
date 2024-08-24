#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DeadReason.h"
#include "ScreenMsgType.h"
#include "GSEventCollectionBase.h"
#include "TargetSourceType.h"
#include "BGS_GSEventCollection.generated.h"

class AActor;
class AController;
class APlayerController;
class APlayerState;
class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGS_GSEventCollection : public UGSEventCollectionBase {
    GENERATED_BODY()
public:
    UBGS_GSEventCollection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlayInCS(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_BGS_TriggerShortcutServer(bool b1, int32 p2);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Evt_PostMulticastAkEventServer(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_TeamWipeOut_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_TriggerShortcutMultiCast(bool b1, int32 p2);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_UnitDead_Multicast_Invoke(const FString& UnitGuid, DeadReason DeadReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_PostMulticastAkEventMultiCast(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_CrusadeSuccess_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_PlayerJoin_Multicast_Invoke(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_PlayerLogOut_Multicast_Invoke(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_TestGameState_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_OnlineDebugInfoEnd_Multicast_Invoke();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_ItemFullOnline_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_OnPlayerLogOut_Multicast_Invoke(AController* Exitting);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_OnUnitTransited_Multicast_Invoke(AActor* OldUnit, AActor* NewlySpawnedUnit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_OnPlayerPostLogin_Multicast_Invoke(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_NotifySwitchTarget_Multicast_Invoke(AActor* OldTarget, AActor* NewTarget, bool TriggerTaunt, TargetSourceType TargetSourceType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_SendOnlineScreenMsg_Multicast_Invoke(ScreenMsgType ScreenMsgType, const FString& Msg, int32 TipsDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_SwitchTickRateLogic_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BGS_NotifyCopyHatredInfo_Multicast_Invoke(AActor* OriginActor, AActor* CopyActor, bool bRemoveOriginHatredInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BGS_OnlineChallengeStateTrigger_Multicast_Invoke(int32 p1, int32 p2);
    
};

