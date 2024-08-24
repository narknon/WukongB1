#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineInterface.h"
#include "EBGWSubsystemType.h"
#include "BGWOnlineSubsystem.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineSubsystem : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlineSubsystem();

    UFUNCTION(BlueprintCallable)
    bool ShowStoreUI(const FString& ProductId, bool AddToCard);
    
    UFUNCTION(BlueprintCallable)
    void QueryUserNATType();
    
    UFUNCTION(BlueprintCallable)
    bool QueryIsOwnAdditionContentSync(const FString& EntitlementId);
    
    UFUNCTION(BlueprintCallable)
    void QueryIsOwnAdditionContent(const FString& EntitlementId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowStoreUIClosedCS(bool bPurchased);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryIsOwnAdditionContentCompleteCS(const FString& EntitlementId, bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EBGWSubsystemType> GetSubsystemType();
    
protected:
    UFUNCTION(BlueprintCallable)
    FName GetSubsystemNameForDebug();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetLocalPlatformName();
    
    UFUNCTION(BlueprintCallable)
    FName GetInstanceName();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    int32 AfterInit();
    
};

