#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineFriend.h"
#include "BGW_OnlineFriend.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineFriend : public UBGWOnlineFriend {
    GENERATED_BODY()
public:
    UBGW_OnlineFriend();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReadFriendListCompleteCS(bool bWasSuccessful);
    
};

