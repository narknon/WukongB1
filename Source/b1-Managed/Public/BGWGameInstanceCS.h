#pragma once
#include "CoreMinimal.h"
#include "BGWGameInstance.h"
#include "EStartGameInstanceTypeForCS.h"
#include "Templates/SubclassOf.h"
#include "BGWGameInstanceCS.generated.h"

class UObject;
class UOnlineSession;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class UBGWGameInstanceCS : public UBGWGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjRefs;
    
public:
    UBGWGameInstanceCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds, int32 TickGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldChangedCS(UWorld* OldWorld, UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostActorTickCS(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldTickStartCS(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartGameInstanceForCS(EStartGameInstanceTypeForCS StartType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UOnlineSession> GetOnlineSessionClassCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTickEvenWhenPaused(float DeltaSeconds, int32 TickGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameModeMatchStateSetCS(FName NewMatchState);
    
};

