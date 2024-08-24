#include "BGWOnlineSubsystem.h"

UBGWOnlineSubsystem::UBGWOnlineSubsystem() {
}

bool UBGWOnlineSubsystem::ShowStoreUI(const FString& ProductId, bool AddToCard) {
    return false;
}

void UBGWOnlineSubsystem::QueryUserNATType() {
}

bool UBGWOnlineSubsystem::QueryIsOwnAdditionContentSync(const FString& EntitlementId) {
    return false;
}

void UBGWOnlineSubsystem::QueryIsOwnAdditionContent(const FString& EntitlementId) {
}



int32 UBGWOnlineSubsystem::Init() {
    return 0;
}

TEnumAsByte<EBGWSubsystemType> UBGWOnlineSubsystem::GetSubsystemType() {
    return Unknown;
}

FName UBGWOnlineSubsystem::GetSubsystemNameForDebug() {
    return NAME_None;
}

FString UBGWOnlineSubsystem::GetLocalPlatformName() {
    return TEXT("");
}

FName UBGWOnlineSubsystem::GetInstanceName() {
    return NAME_None;
}

void UBGWOnlineSubsystem::Destroy() {
}

int32 UBGWOnlineSubsystem::AfterInit() {
    return 0;
}


