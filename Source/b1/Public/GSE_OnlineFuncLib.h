#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EGSNetCloseResult.h"
#include "GSE_OnlineFuncLib.generated.h"

class AActor;
class APlayerController;
class APlayerState;
class UActorChannel;
class UNetConnection;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class B1_API UGSE_OnlineFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_OnlineFuncLib();

    UFUNCTION(BlueprintCallable)
    static FName SlowMakeUniqueObjectName(UObject* Parent, const UClass* Class, FName InBaseName);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameDefaultMap(const FString& NewMap);
    
    UFUNCTION(BlueprintCallable)
    static int64 ServerReplicateOneActorToPlayer(AActor* Actor, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void ResetNetGuidAckStat(int64 Guid, UNetConnection* NetConnection);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterNetGuid(int64 Guid, UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void MarkActorRoleDirty(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorChannelReadyForServer(AActor* Actor, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorChannelReadyForClient(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool InServerReal(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUniqueNetIdStringByPlayerState(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUniqueNetIdStringByPlayerController(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUniqueNetIdStringByFUniqueNetIdRepl(FUniqueNetIdRepl UniqueId);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetReplicationGraph(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetObjNetGuidByChannel(UActorChannel* Channel);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetObjNetGuid(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjByNetGuid(UObject* WorldCtx, int64 Guid);
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameDefaultMap();
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetActorChannelActor(UActorChannel* Channel);
    
    UFUNCTION(BlueprintCallable)
    static void GEngineHandleDisconnect(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceRemoveNetGuid(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CloseServerConnection(EGSNetCloseResult CloseResult, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void CloseClientConnection(EGSNetCloseResult CloseResult, APlayerController* ClientPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool CloseActorChannelByActorAndPlayerController(AActor* Actor, APlayerController* PlayerController, int32 CloseReason);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorChannelValid(AActor* Actor, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorChannelOpenAcked(AActor* Actor, APlayerController* PlayerController);
    
};

