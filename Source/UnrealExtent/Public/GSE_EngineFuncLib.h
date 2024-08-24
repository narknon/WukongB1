#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "EGSQualityLevel.h"
#include "GSInputActionKeyMapping.h"
#include "GSInputAxisKeyMapping.h"
#include "Templates/SubclassOf.h"
#include "GSE_EngineFuncLib.generated.h"

class AActor;
class AController;
class AGameMode;
class AGameModeBase;
class APawn;
class APlayerCameraManager;
class APlayerController;
class UActorComponent;
class UAsyncTaskDownloadImage;
class UAudioComponent;
class UBinkMediaPlayer;
class UDragDropOperation;
class UGameInstance;
class UMediaPlayer;
class UNetDriver;
class UObject;
class UPackage;
class UReflectionCaptureComponent;
class UReplicationDriver;
class UUserWidget;
class UWidget;
class UWorld;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_EngineFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_EngineFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool WasActorRecentlyRendered(AActor* InActor, const float InTolerence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogWLevel(const UObject* WorldContext, int32 InLogLevel, const FName& Catogary, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogWarning(const UObject* WorldContext, const FName& Catogary, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogSegmentWarning(const UObject* WorldContext, const FName& Catogary, const FVector& SegmentStart, const FVector& SegmentEnd, const FColor& Color, float Thickness, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogSegmentInfo(const UObject* WorldContext, const FName& Catogary, const FVector& SegmentStart, const FVector& SegmentEnd, const FColor& Color, float Thickness, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogSegmentError(const UObject* WorldContext, const FName& Catogary, const FVector& SegmentStart, const FVector& SegmentEnd, const FColor& Color, float Thickness, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogLocationWarning(const UObject* WorldContext, const FName& Catogary, const FVector& Location, float Radius, const FColor& Color, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogLocationInfo(const UObject* WorldContext, const FName& Catogary, const FVector& Location, float Radius, const FColor& Color, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogLocationError(const UObject* WorldContext, const FName& Catogary, const FVector& Location, float Radius, const FColor& Color, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogInfo(const UObject* WorldContext, const FName& Catogary, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogError(const UObject* WorldContext, const FName& Catogary, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogBoxWarning(const UObject* WorldContext, const FName& Catogary, const FBox& Box, const FColor& Color, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogBoxInfo(const UObject* WorldContext, const FName& Catogary, const FBox& Box, const FColor& Color, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void VLogBoxError(const UObject* WorldContext, const FName& Catogary, const FBox& Box, const FColor& Color, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool UseStatsMacro();
    
    UFUNCTION(BlueprintCallable)
    static void UploadPSOHttpRequest(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateAudioUtilAnalyzer(AActor* AudioUtilActor, const FString& LoudnessAnalyzerAssetPath, const FString& ConstantAnalyzerAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static float ToMilliseconds(const int64 Cycles);
    
    UFUNCTION(BlueprintCallable)
    static bool TestPathSync(AController* Controller, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static void StopAudio(AActor* AudioUtilActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetPSOCacheUsageMask(int32 MapIndex, int32 MaterialQualityLevel, int32 NiagaraQualityLevel, int32 ShadowQualityLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseCursorWidgetVisible(APlayerController* PlayerController, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetLogEnable(bool bEnableDbg, bool bEnableDbgDisplay, bool bEnableInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelRequestSuspend(bool ShouldSuspend);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputModeUIOnly(APlayerController* Target, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputModeGameOnly(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputDeadZone(APlayerController* PlayerController, const FName& AxisName, float DeadZone);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayGamma(const UObject* WorldCtx, float Gamma);
    
    UFUNCTION(BlueprintCallable)
    static void SetDesiredQualityLevel(EGSQualityLevel TargetGSQualityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetCanEverTick(UObject* Obj, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetAudioBoxFreqNum(UUserWidget* AudioBox, const int32 InFreqNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorComponentMobilityMovable(AActor* Actor, bool IsMovable);
    
    UFUNCTION(BlueprintCallable)
    static void ServerSeamlessTravel(UWorld* World, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void SaveStringToFile(const FString& Path, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SavePSOCacheFile();
    
    UFUNCTION(BlueprintCallable)
    static void RunProcessWithCheck(const FString& InProcessPath);
    
    UFUNCTION(BlueprintCallable)
    static void RunProcess(const FString& InProcessPath);
    
    UFUNCTION(BlueprintCallable)
    static void ResumePsoBatching();
    
    UFUNCTION(BlueprintCallable)
    static void RestartGame(AGameMode* GameMode);
    
    UFUNCTION(BlueprintCallable)
    static void RestartApplication();
    
    UFUNCTION(BlueprintCallable)
    static void ResetAudioVisualizing(UUserWidget* AudioBox);
    
    UFUNCTION(BlueprintCallable)
    static void RequestQuit(const FString& Desc);
    
    UFUNCTION(BlueprintCallable)
    static void RequestExit(bool Force);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceInputAxisList(APlayerController* PlayerController, const TArray<FGSInputAxisKeyMapping>& AxisMappings);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceInputActionList(APlayerController* PlayerController, const TArray<FGSInputActionKeyMapping>& ActionMappings);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RegisteConsoleKey(TArray<FName> Keys);
    
    UFUNCTION(BlueprintCallable)
    static void QuitGame(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static void QuitEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool QAIsCompiling();
    
    UFUNCTION(BlueprintCallable)
    static bool QAHasReached(AActor* AgentActor, AActor* GoalActor);
    
    UFUNCTION(BlueprintCallable)
    static void QAGetSimpleCollisionCylinder(AActor* AgentActor, float& CollisionRadius, float& CollisionHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    static void QAGenCrash();
    
    UFUNCTION(BlueprintCallable)
    static void PSOFullCompilation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareLevelsNeedToBeUnloaded(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PlayAudio(AActor* AudioUtilActor, bool VisualOnly);
    
    UFUNCTION(BlueprintCallable)
    static void PerfTest(int32 CaseID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void PausePsoBatching();
    
    UFUNCTION(BlueprintCallable)
    static void PauseAudio(AActor* AudioUtilActor);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor MultipleColorLerp(FLinearColor v1, FLinearColor v2, FLinearColor V3, FLinearColor V4, float LerpAlpha);
    
    UFUNCTION(BlueprintCallable)
    static void MediaPlayerTimeSeek(UMediaPlayer* MediaPlayer, double Time);
    
    UFUNCTION(BlueprintCallable)
    static FVector MathEaseV(FVector A, FVector B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static FRotator MathEaseR(FRotator A, FRotator B, float alpha, bool bShortestPath, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor MathEaseLinearColor(FLinearColor A, FLinearColor B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D MathEase2D(FVector2D A, FVector2D B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static float MathEase(float A, float B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static void MarkUnloadPsoState();
    
    UFUNCTION(BlueprintCallable)
    static void LogWLevel(const FString& Str, int32 InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void LogWarning(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static void LogShippingError(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static void LogShipping(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static void LogInfo(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static void LogError(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static void LogDbgWithColor(const FString& Str, bool bPrintScreen, float TimeToDisplay, FColor Color, int32 Key);
    
    UFUNCTION(BlueprintCallable)
    static void LogDbg(const FString& Str, bool bPrintScreen, float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable)
    static FString LoadFileToString(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUnloadPSOFinished();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTestBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStandaloneGame();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStandAlone(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSavePSOCacheInErrorState();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRegexMatched(const FString& InStr, const FString& RegexExpression);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPSOBatchingPaused();
    
    UFUNCTION(BlueprintCallable)
    static bool IsListenServer(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDriverVersionMismatch();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDevelopmentBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDedicateServer(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool IsControllerInPlayState(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCommandLineHasParam(const FString& QueryParam);
    
    UFUNCTION(BlueprintCallable)
    static bool IsClient(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool HasValidCaptureData(UReflectionCaptureComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static bool HasLaunchOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GSSaveConfig(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetWorldMainAudioDeviceID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UWorld* GetWorldFromObj(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWindowScreenResolution();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FString> GetWarningUITexList(UObject* WorldContext, const FString& TraverseRootPath, const FString& SourceFileCommPath, TArray<FString> ExcludedPathList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FString> GetWarningPhysicsAssetList(UObject* WorldContext, const FString& TraverseRootPath);
    
    UFUNCTION(BlueprintCallable)
    static UPackage* GetTransientPackage();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalPsoPrecompileNum();
    
    UFUNCTION(BlueprintCallable)
    static FTimespan GetTimeSpanFromSeconds(double Seconds);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShadowQualityLevel();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRemainingPsoPrecompileNum();
    
    UFUNCTION(BlueprintCallable)
    static void GetRegexMatchInfo(const FString& InStr, const FString& RegexExpression, TArray<FString>& ExtractedInfo);
    
    UFUNCTION(BlueprintCallable)
    static EGSQualityLevel GetRecommendedQualityLevel(bool bLogInfo);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AGameModeBase> GetProjectSettingDefaultGameMode();
    
    UFUNCTION(BlueprintCallable)
    static FString GetProjectDir();
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerViewRectMatrixInfo(APlayerController* Player, FMatrix& ViewProjectionMatrixInv, FVector2D& OutConstrainedViewRectMin, FVector2D& OutConstrainedViewRectMax, FVector2D& OutViewRectMin, FVector2D& OutViewRectMax);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerViewRect(APlayerController* Player, FVector2D& OutConstrainedViewRectMin, FVector2D& OutConstrainedViewRectMax, FVector2D& OutViewRectMin, FVector2D& OutViewRectMax);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetPlayerViewProjectionMatrixInv(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetPlayerViewProjectionMatrix(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    static double GetPlatformTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPawnAutoPossessConfig(APawn* PC);
    
    UFUNCTION(BlueprintCallable)
    static double GetMediaPlayerTime(const UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static double GetMediaPlayerDuartion(const UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> GetMacAddress();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLoginId();
    
    UFUNCTION(BlueprintCallable)
    static APlayerCameraManager* GetLocalPlayerCameraManager(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLaunchValue(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetInputKey(const FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static float GetInputDeadZone(APlayerController* PlayerController, const FName& AxisName);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetGFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    static APlayerController* GetFirstLocalPlayerController(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEngineMinorVersion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDisplayName(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static float GetDisplayGamma(const UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static void GetDeviceInfo(FString& Cpu, FString& Gpu, int32& MemSize);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDeviceId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultLanguageCS();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentRhiName();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetChildActors(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBinkMediaPlayerTotalFrames(const UBinkMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static double GetBinkMediaPlayerTime(const UBinkMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static float GetBinkMediaPlayerFrameRate(const UBinkMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static double GetBinkMediaPlayerDuartion(const UBinkMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBinkMediaPlayerCurFrame(const UBinkMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInputAxisKeyMapping> GetAxisMappings(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static float GetAvailablePhysical();
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* GetAudioInfoOfAudioVisualize(AActor* AudioUtilActor, float& AudioDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAsyncLoadPercentage(const FName& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static float GetAnalogValue(const FAnalogInputEvent AnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetAnalogInputKey(const FAnalogInputEvent AnalogInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static EGSQualityLevel GetActualQualityLevel(bool bLogInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInputActionKeyMapping> GetActionMappings(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GameInstanceIsDedicatedServer(const UGameInstance* GameInst);
    
    UFUNCTION(BlueprintCallable)
    static void FlushMainAudioDevice(const int32 DeviceID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> FindPathSync(AController* Controller, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static UNetDriver* FindNamedNetDriver(const UWorld* InWorld, FName NetDriverName);
    
    UFUNCTION(BlueprintCallable)
    static FString FindAndPrintStaleRefsByObjectPath(const FString& InObjectPath);
    
    UFUNCTION(BlueprintCallable)
    static FString FindAndPrintStaleReferencesToObject(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void ExecCmdOutGLog(const FString& Cmd, UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static void EngineGC(bool bFullPurge);
    
    UFUNCTION(BlueprintCallable)
    static void EnableForceStreamdOutLevelGCCheck(bool Enable, bool IgnoreEditor);
    
    UFUNCTION(BlueprintCallable)
    static UObject* DuplicateAsset(const FString& AssetName, const FString& PackagePath, UObject* OriginalObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCircleArc(const UObject* WorldContextObject, FVector Center, float Radius, const FVector& Direction, float AngleWidth, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DisableDebugExecBindings(UObject* WorldCtx, bool IsDisable);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, const FName& KeyName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void DestroyActorsWithSpecifiedKeyword(const UObject* InWorldContext, const FString& InKeyword);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void DelayGC();
    
    UFUNCTION(BlueprintCallable)
    static UReplicationDriver* CreateReplicationDriver(UNetDriver* NetDriver, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNamedNetDriver(UWorld* InWorld, FName NetDriverName, FName NetDriverDefinition);
    
    UFUNCTION(BlueprintCallable)
    static UDragDropOperation* CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass);
    
    UFUNCTION(BlueprintCallable)
    static UObject* CreateAsset(const FString& Path, const FString& Name, UClass* CreatedClass);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipBoard(const FString& InStr);
    
    UFUNCTION(BlueprintCallable)
    static void ConsoleVariableSetMouseCursor(bool MouseCursor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConsoleVarGetInt(const FString& Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CloseNetConnection(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ClientSeamlessTravel(APlayerController* PC, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void CaptureCurrentViewport(bool bCapture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BlockTillSuspendedLevelsCompleted(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BlockTillLevelStreamingCompleted(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BinkMediaPlayerTimeSeek(UBinkMediaPlayer* MediaPlayer, double Time);
    
    UFUNCTION(BlueprintCallable)
    static bool BinkMediaPlayerGoToWithProcMs(UBinkMediaPlayer* MediaPlayer, int32 TargetFrame, int32 ProcMS);
    
    UFUNCTION(BlueprintCallable)
    static bool BinkMediaPlayerGoTo(UBinkMediaPlayer* MediaPlayer, int32 TargetFrame);
    
    UFUNCTION(BlueprintCallable)
    static bool BindAudioUtilAndBox(AActor* AudioUtilActor, UUserWidget* AudioBox);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskDownloadImage* AsyncDownloadImage(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void AdjustPSOPrecompileBatch(int32 BatchSize, float BatchTime);
    
};

