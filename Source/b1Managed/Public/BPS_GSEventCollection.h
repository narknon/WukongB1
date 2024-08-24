#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EGSNetCloseResult.h"
#include "DynamicTamerSpawnReq.h"
#include "GSEventCollectionBase.h"
#include "ServantReq.h"
#include "SummonReq.h"
#include "TamerRoleSync.h"
#include "BPS_GSEventCollection.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBPS_GSEventCollection : public UGSEventCollectionBase {
    GENERATED_BODY()
public:
    UBPS_GSEventCollection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_RequestSummon_Invoke(FSummonReq InSummonReq);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlayInCS(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_BPS_SyncRoleDataTmp_Invoke(TArray<uint8> RoleData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_TmpTransSendDropItem_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_BPS_ServerActivateTamer_Invoke(TArray<FString> Guids);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_SendServantReq_Multicast_Invoke(FServantReq InServantReq);
    
    UFUNCTION(Client, Reliable)
    void Evt_CloseConnectionWithResult_Invoke(EGSNetCloseResult CloseResult);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_BPS_ServerSpawnDynamicTamer_Invoke(FDynamicTamerSpawnReq TamerClass);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Evt_BPS_TestPlayerState_Multicast_Invoke(int32 p1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Evt_BPS_ClientInitCharacterNetRole_Invoke(TArray<FTamerRoleSync> Guids);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Evt_BPS_SwitchPlayerTransState_Multicast_Invoke(AActor* OldActor, int32 NewActorResId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_BPS_ServerNotifyClientTamerBackToLoad_Invoke(TArray<FString> Guids);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Evt_BPS_ServerNotifyClientAuthorityTamerDead_Invoke(TArray<FString> Guids);
    
};

