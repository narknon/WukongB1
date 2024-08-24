#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineIdentity.h"
#include "EBGWPrivilegeResult.h"
#include "EBGWUserPrivileges.h"
#include "BGW_OnlineIdentity.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineIdentity : public UBGWOnlineIdentity {
    GENERATED_BODY()
public:
    UBGW_OnlineIdentity();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoginCompletedCS(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRecvAntiAddictionActionCS(const FString& RecvActionsJsonStr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGetUserPrivilegeCompleteCS(EBGWUserPrivileges Privilege, EBGWPrivilegeResult PrivilegeResult);
    
};

