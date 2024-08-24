#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Net/Core/Connection/NetEnums.h"
#include "BlueprintSearchResult.h"
#include "BGWOnlineSubSystemMgr.generated.h"

class UWorld;

UCLASS(Blueprintable)
class B1_API UBGWOnlineSubSystemMgr : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldCtx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnLineGameMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMenuMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintSearchResult> SearchResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QueryFlag;
    
    UBGWOnlineSubSystemMgr();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSessionCompleteCS(FName SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOnlineGameCompleteCS(FName SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJoinSessionCompleteCS(FName SessionName, int32 Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFindSessionsCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroySessionCompleteCS(FName SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateSessionCompleteCS(FName SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void LeaveGame();
    
    UFUNCTION(BlueprintCallable)
    bool JoinGame(FBlueprintSearchResult Result);
    
    UFUNCTION(BlueprintCallable)
    bool HostGame(bool bIsLAN, int32 MaxNumPlayers, TMap<FString, FString> CustumSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNetworkErrorCS(UWorld* World, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorString);
    
    UFUNCTION(BlueprintCallable)
    void FindGames(bool bIsLAN);
    
};

