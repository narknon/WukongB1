#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGG_GameMode.h"
#include "Templates/SubclassOf.h"
#include "BGG_GameModeB1.generated.h"

class AController;
class APawn;
class APlayerController;

UCLASS(Blueprintable, NonTransient)
class ABGG_GameModeB1 : public ABGG_GameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultPawnClassBeforeRoleData;
    
    ABGG_GameModeB1(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreLoginCS(const FString& Options, const FString& LoginAddress, const FString& UniqueId, FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoginOutCS(AController* Exiting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostLoginCS(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMatchIsWaitingToStartCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetDefaultPawnClassForController(AController* InController);
    
};

