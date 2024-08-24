#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineInterface.h"
#include "EOnlineActivityOutcomeType.h"
#include "BGWOnlineActivity.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineActivity : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlineActivity();

    UFUNCTION(BlueprintCallable)
    void StartActivity(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityPriority(const TMap<FString, int32>& PriorityMap);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityAvailability(const FString& ActivityId, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResumeActivity(const FString& ActivityId, const TArray<FString>& InProgressTasks, const TArray<FString>& CompletedTasks);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActiveActivities();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartActivityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetActivityPriorityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetActivityAvailabilityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResumeActivityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetAllActiveActivitiesCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameActivityActivationCompleteCS(const FString& ActivityId, const FString& SessionStr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndActivityCompleteCS(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(const FString& ActivityId, const EOnlineActivityOutcomeType& Outcome);
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

