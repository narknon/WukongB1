#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineInterface.h"
#include "BGWOnlinePresence.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlinePresence : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlinePresence();

    UFUNCTION(BlueprintCallable)
    void SetRichPresence(const FString& PresenceId, const FString& StatusStr, TMap<FString, FString> Properties);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPresenceCompleteCS(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

