#include "BGWOnlineSession.h"

UBGWOnlineSession::UBGWOnlineSession() {
}

void UBGWOnlineSession::ShowInviteUI(TEnumAsByte<EBGWOnlineSessionType> SessionType) {
}

void UBGWOnlineSession::ShowFriendUI() {
}

void UBGWOnlineSession::SearchSessions(TEnumAsByte<EBGWOnlineSessionType> SessionType, TMap<FName, FString> SearchFilters, bool bIsLANMatch) {
}








void UBGWOnlineSession::JoinSession(TEnumAsByte<EBGWOnlineSessionType> SessionType, const FString& SessionId) {
}

int32 UBGWOnlineSession::Init() {
    return 0;
}

FString UBGWOnlineSession::GetTravelUrl(TEnumAsByte<EBGWOnlineSessionType> SessionType) {
    return TEXT("");
}

TEnumAsByte<EBGWOnlineSessionState> UBGWOnlineSession::GetSessionState(TEnumAsByte<EBGWOnlineSessionType> SessionType) {
    return NoSession;
}

FString UBGWOnlineSession::GetSessionIdStr(TEnumAsByte<EBGWOnlineSessionType> SessionType) {
    return TEXT("");
}

void UBGWOnlineSession::FindSessionById(const FString& SessionId, bool IsGameSession) {
}

void UBGWOnlineSession::DestroySession(TEnumAsByte<EBGWOnlineSessionType> SessionType) {
}

void UBGWOnlineSession::Destroy() {
}

void UBGWOnlineSession::CreateSession(TEnumAsByte<EBGWOnlineSessionType> SessionType, int32 MaxNumPlayers, TMap<FName, FString> CustumSettings, bool bIsLANMatch, const FString& OverrideSessionTemplate) {
}


