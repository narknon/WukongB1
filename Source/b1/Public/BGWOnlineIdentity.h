#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineInterface.h"
#include "EBGWLoginStatus.h"
#include "EBGWPrivilegeResult.h"
#include "EBGWUserPrivileges.h"
#include "BGWOnlineIdentity.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineIdentity : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlineIdentity();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecvAntiAddictionActionCS(const FString& RecvActionsJsonStr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginCompletedCS(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetUserPrivilegeCompleteCS(TEnumAsByte<EBGWUserPrivileges> Privilege, EBGWPrivilegeResult PrivilegeResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Login();
    
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetUserPrivilege(TEnumAsByte<EBGWUserPrivileges> Privilege);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUniquePlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNickname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EBGWLoginStatus> GetLoginStatus() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetLinkedAccountExternalToken();
    
    UFUNCTION(BlueprintCallable)
    FString GetAuthToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAuthOnlineUserId() const;
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

