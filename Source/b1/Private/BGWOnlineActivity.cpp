#include "BGWOnlineActivity.h"

UBGWOnlineActivity::UBGWOnlineActivity() {
}

void UBGWOnlineActivity::StartActivity(const FString& ActivityId) {
}

void UBGWOnlineActivity::SetActivityPriority(const TMap<FString, int32>& PriorityMap) {
}

void UBGWOnlineActivity::SetActivityAvailability(const FString& ActivityId, bool bEnable) {
}

void UBGWOnlineActivity::ResumeActivity(const FString& ActivityId, const TArray<FString>& InProgressTasks, const TArray<FString>& CompletedTasks) {
}

void UBGWOnlineActivity::ResetAllActiveActivities() {
}








int32 UBGWOnlineActivity::Init() {
    return 0;
}

void UBGWOnlineActivity::EndActivity(const FString& ActivityId, const EOnlineActivityOutcomeType& Outcome) {
}

void UBGWOnlineActivity::Destroy() {
}


