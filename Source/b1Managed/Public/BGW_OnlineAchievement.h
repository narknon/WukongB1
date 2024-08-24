#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineAchievement.h"
#include "BGW_OnlineAchievement.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineAchievement : public UBGWOnlineAchievement {
    GENERATED_BODY()
public:
    UBGW_OnlineAchievement();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStatUpdatedCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQueryAchievementsCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAchievementsWrittenCompleteCS(bool bWasSuccessful);
    
};

