#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineAchievementTag.h"
#include "BGWOnlineInterface.h"
#include "BGWOnlineAchievement.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineAchievement : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlineAchievement();

    UFUNCTION(BlueprintCallable)
    void WriteAchievement(const FString& writeObjKey, double writeObjValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStat(const FString& StatName, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void ReadAchievements();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatUpdatedCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryAchievementsCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAchievementsWrittenCompleteCS(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetAllAchievements(TArray<FBGWOnlineAchievementTag>& outAchievements);
    
public:
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

