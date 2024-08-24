#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineFriendInfo.h"
#include "BGWOnlineInterface.h"
#include "EFriendsListsType.h"
#include "BGWOnlineFriend.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineFriend : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlineFriend();

    UFUNCTION(BlueprintCallable)
    void ReadFriendsList(TEnumAsByte<EFriendsListsType> ListType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadFriendListCompleteCS(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
    UFUNCTION(BlueprintCallable)
    bool GetFriendsList(TEnumAsByte<EFriendsListsType> ListType, TArray<FBGWOnlineFriendInfo>& OutFriends);
    
    UFUNCTION(BlueprintCallable)
    bool GetFriend(const FString& ListName);
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

