#pragma once
#include "CoreMinimal.h"
#include "BGWOnlinePresence.h"
#include "BGW_OnlinePresence.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlinePresence : public UBGWOnlinePresence {
    GENERATED_BODY()
public:
    UBGW_OnlinePresence();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetPresenceCompleteCS(bool bWasSuccessful);
    
};

