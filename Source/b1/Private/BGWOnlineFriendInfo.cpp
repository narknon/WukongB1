#include "BGWOnlineFriendInfo.h"

FBGWOnlineFriendInfo::FBGWOnlineFriendInfo() {
    this->bIsOnline = false;
    this->bIsPlaying = false;
    this->bIsPlayingThisGame = false;
    this->bIsJoinable = false;
    this->bHasVoiceSupport = false;
    this->Status = EFriendsStateType::Online;
}

