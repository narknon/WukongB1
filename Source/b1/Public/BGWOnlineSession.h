#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineInterface.h"
#include "BGWOnlineSessionContext.h"
#include "EBGWJoinSessionResult.h"
#include "EBGWOnlineSessionState.h"
#include "EBGWOnlineSessionType.h"
#include "BGWOnlineSession.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineSession : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGWOnlineSessionContext Context;
    
    UBGWOnlineSession();

    UFUNCTION(BlueprintCallable)
    void ShowInviteUI(TEnumAsByte<EBGWOnlineSessionType> SessionType);
    
    UFUNCTION(BlueprintCallable)
    void ShowFriendUI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SearchSessions(TEnumAsByte<EBGWOnlineSessionType> SessionType, TMap<FName, FString> SearchFilters, bool bIsLANMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionUserInviteAcceptedCS(bool bWasSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteReceivedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSearchSessionsCompleteCS(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJoinSessionCompleteCS(EBGWJoinSessionResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFindSessionByIdCompleteCS(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroySessionCompleteCS(EBGWOnlineSessionType SessionType, bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateSessionCompleteCS(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(TEnumAsByte<EBGWOnlineSessionType> SessionType, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetTravelUrl(TEnumAsByte<EBGWOnlineSessionType> SessionType);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EBGWOnlineSessionState> GetSessionState(TEnumAsByte<EBGWOnlineSessionType> SessionType);
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionIdStr(TEnumAsByte<EBGWOnlineSessionType> SessionType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FindSessionById(const FString& SessionId, bool IsGameSession);
    
    UFUNCTION(BlueprintCallable)
    void DestroySession(TEnumAsByte<EBGWOnlineSessionType> SessionType);
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    void CreateSession(TEnumAsByte<EBGWOnlineSessionType> SessionType, int32 MaxNumPlayers, TMap<FName, FString> CustumSettings, bool bIsLANMatch, const FString& OverrideSessionTemplate);
    
};

