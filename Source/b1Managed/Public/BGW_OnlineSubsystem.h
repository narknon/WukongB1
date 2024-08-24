#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineSubsystem.h"
#include "BGW_OnlineSubsystem.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineSubsystem : public UBGWOnlineSubsystem {
    GENERATED_BODY()
public:
    UBGW_OnlineSubsystem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowStoreUIClosedCS(bool bPurchased);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQueryIsOwnAdditionContentCompleteCS(const FString& EntitlementId, bool bWasSuccessful);
    
};

