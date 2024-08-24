#include "BGWOnlineSubSystemMgr.h"

UBGWOnlineSubSystemMgr::UBGWOnlineSubSystemMgr() {
    this->WorldCtx = NULL;
    this->QueryFlag = false;
}







void UBGWOnlineSubSystemMgr::LeaveGame() {
}

bool UBGWOnlineSubSystemMgr::JoinGame(FBlueprintSearchResult Result) {
    return false;
}

bool UBGWOnlineSubSystemMgr::HostGame(bool bIsLAN, int32 MaxNumPlayers, TMap<FString, FString> CustumSettings) {
    return false;
}


void UBGWOnlineSubSystemMgr::FindGames(bool bIsLAN) {
}


