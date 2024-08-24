#pragma once
#include "CoreMinimal.h"
#include "ChapterInfo.h"
#include "EGSLoadingScreenState.h"
#include "EGSLoadingScreenType.h"
#include "LoadingTipsInfo.h"
#include "Engine/GameInstance.h"
#include "EStartGameInstanceTypeForCS.h"
#include "Templates/SubclassOf.h"
#include "BGWGameInstance.generated.h"

class ABGW_GameInstanceTicker;
class ABGW_GameInstanceTickerEvenWhenPaused;
class UBGWAssetLoader;
class UBGWVolumeManager;
class UBGW_EventCollection;
class UGSInputComponent;
class ULocalPlayer;
class UOnlineSession;
class UTexture2D;
class UWorld;
class UWorldActorContainer;

UCLASS(Blueprintable, NonTransient)
class B1_API UBGWGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldActorContainer* MainActorWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWVolumeManager* VolumeMgr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_EventCollection* Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_PreAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_PrePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_BeforeStartPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_DuringPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_BeforePostPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_PostPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_BeforePostUpdateWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTicker* TickActor_PostUpdateWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTickerEvenWhenPaused* TickActor_PrePhysics_EvenWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGW_GameInstanceTickerEvenWhenPaused* TickActor_BeforePostUpdateWork_EvenWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWAssetLoader* AssetLoader;
    
    UBGWGameInstance();

    UFUNCTION(BlueprintCallable)
    bool TravelURLHasOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    bool TravelURLHasHost();
    
    UFUNCTION(BlueprintCallable)
    void SwitchLoadingScreenThread(bool UseSlateThread);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGameInstanceForCS(TEnumAsByte<EStartGameInstanceTypeForCS> StartType);
    
    UFUNCTION(BlueprintCallable)
    void RequestFadeAway();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLoadingTipsMask(UTexture2D* MaskTexture);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLoadingTipsInfo(FLoadingTipsInfo TipsInfo);
    
    UFUNCTION(BlueprintCallable)
    void RegisterChapterInfo(FChapterInfo ChapterInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickEvenWhenPaused(float DeltaSeconds, int32 TickGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds, int32 TickGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessNianHuiLogic();
    
    UFUNCTION(BlueprintCallable)
    void PrepareFadeAway();
    
    UFUNCTION(BlueprintCallable)
    void OpenLoadingScreen(bool UseSlateThread, EGSLoadingScreenType LoadingScreenType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldTickStartCS(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldChangedCS(UWorld* OldWorld, UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostActorTickCS(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameModeMatchStateSetCS(FName NewMatchState);
    
    UFUNCTION(BlueprintCallable)
    bool IsToggleLoadingTipsFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadingScreenFadeAwayFinish();
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetWorldForCS();
    
    UFUNCTION(BlueprintCallable)
    FString GetTravelURLHost();
    
    UFUNCTION(BlueprintCallable)
    FString GetTravelURLForCS();
    
    UFUNCTION(BlueprintCallable)
    double GetTimeInMSSinceLoadingOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UOnlineSession> GetOnlineSessionClassCS();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetLastUseTips();
    
    UFUNCTION(BlueprintCallable)
    ULocalPlayer* GetFirstGamePlayerForCS();
    
    UFUNCTION(BlueprintCallable)
    UBGW_EventCollection* GetEvents();
    
    UFUNCTION(BlueprintCallable)
    EGSLoadingScreenType GetCurLoadingScreenType();
    
    UFUNCTION(BlueprintCallable)
    EGSLoadingScreenState GetCurLoadingScreenState();
    
    UFUNCTION(BlueprintCallable)
    void CloseLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    bool CanFadeAway();
    
    UFUNCTION(BlueprintCallable)
    void BeginToggleLoadingTips(UGSInputComponent* InputComponent);
    
};

