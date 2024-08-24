#include "BGWOnlineFriend.h"

UBGWOnlineFriend::UBGWOnlineFriend() {
}

void UBGWOnlineFriend::ReadFriendsList(TEnumAsByte<EFriendsListsType> ListType) {
}


int32 UBGWOnlineFriend::Init() {
    return 0;
}

bool UBGWOnlineFriend::GetFriendsList(TEnumAsByte<EFriendsListsType> ListType, TArray<FBGWOnlineFriendInfo>& OutFriends) {
    return false;
}

bool UBGWOnlineFriend::GetFriend(const FString& ListName) {
    return false;
}

void UBGWOnlineFriend::Destroy() {
}


