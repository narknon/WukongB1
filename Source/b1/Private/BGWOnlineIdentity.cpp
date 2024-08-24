#include "BGWOnlineIdentity.h"

UBGWOnlineIdentity::UBGWOnlineIdentity() {
}




void UBGWOnlineIdentity::Login() {
}

int32 UBGWOnlineIdentity::Init() {
    return 0;
}

void UBGWOnlineIdentity::GetUserPrivilege(TEnumAsByte<EBGWUserPrivileges> Privilege) {
}

FString UBGWOnlineIdentity::GetUniquePlayerId() const {
    return TEXT("");
}

FString UBGWOnlineIdentity::GetPlayerNickname() const {
    return TEXT("");
}

TEnumAsByte<EBGWLoginStatus> UBGWOnlineIdentity::GetLoginStatus() const {
    return NotLoggedIn;
}

FString UBGWOnlineIdentity::GetLinkedAccountExternalToken() {
    return TEXT("");
}

FString UBGWOnlineIdentity::GetAuthToken() {
    return TEXT("");
}

FString UBGWOnlineIdentity::GetAuthOnlineUserId() const {
    return TEXT("");
}

void UBGWOnlineIdentity::Destroy() {
}


