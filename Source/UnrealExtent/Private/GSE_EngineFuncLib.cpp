#include "GSE_EngineFuncLib.h"
#include "Templates/SubclassOf.h"

UGSE_EngineFuncLib::UGSE_EngineFuncLib() {
}

bool UGSE_EngineFuncLib::WasActorRecentlyRendered(AActor* InActor, const float InTolerence) {
    return false;
}

void UGSE_EngineFuncLib::VLogWLevel(const UObject* WorldContext, int32 InLogLevel, const FName& Catogary, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogWarning(const UObject* WorldContext, const FName& Catogary, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogSegmentWarning(const UObject* WorldContext, const FName& Catogary, const FVector& SegmentStart, const FVector& SegmentEnd, const FColor& Color, float Thickness, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogSegmentInfo(const UObject* WorldContext, const FName& Catogary, const FVector& SegmentStart, const FVector& SegmentEnd, const FColor& Color, float Thickness, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogSegmentError(const UObject* WorldContext, const FName& Catogary, const FVector& SegmentStart, const FVector& SegmentEnd, const FColor& Color, float Thickness, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogLocationWarning(const UObject* WorldContext, const FName& Catogary, const FVector& Location, float Radius, const FColor& Color, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogLocationInfo(const UObject* WorldContext, const FName& Catogary, const FVector& Location, float Radius, const FColor& Color, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogLocationError(const UObject* WorldContext, const FName& Catogary, const FVector& Location, float Radius, const FColor& Color, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogInfo(const UObject* WorldContext, const FName& Catogary, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogError(const UObject* WorldContext, const FName& Catogary, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogBoxWarning(const UObject* WorldContext, const FName& Catogary, const FBox& Box, const FColor& Color, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogBoxInfo(const UObject* WorldContext, const FName& Catogary, const FBox& Box, const FColor& Color, const FString& Text) {
}

void UGSE_EngineFuncLib::VLogBoxError(const UObject* WorldContext, const FName& Catogary, const FBox& Box, const FColor& Color, const FString& Text) {
}

bool UGSE_EngineFuncLib::UseStatsMacro() {
    return false;
}

void UGSE_EngineFuncLib::UploadPSOHttpRequest(int32 Num) {
}

void UGSE_EngineFuncLib::UpdateAudioUtilAnalyzer(AActor* AudioUtilActor, const FString& LoudnessAnalyzerAssetPath, const FString& ConstantAnalyzerAssetPath) {
}

float UGSE_EngineFuncLib::ToMilliseconds(const int64 Cycles) {
    return 0.0f;
}

bool UGSE_EngineFuncLib::TestPathSync(AController* Controller, const FVector& TargetLocation) {
    return false;
}

void UGSE_EngineFuncLib::StopAudio(AActor* AudioUtilActor) {
}

void UGSE_EngineFuncLib::SetPSOCacheUsageMask(int32 MapIndex, int32 MaterialQualityLevel, int32 NiagaraQualityLevel, int32 ShadowQualityLevel) {
}

void UGSE_EngineFuncLib::SetMouseCursorWidgetVisible(APlayerController* PlayerController, bool bVisible) {
}

void UGSE_EngineFuncLib::SetLogEnable(bool bEnableDbg, bool bEnableDbgDisplay, bool bEnableInfo) {
}

void UGSE_EngineFuncLib::SetLevelRequestSuspend(bool ShouldSuspend) {
}

void UGSE_EngineFuncLib::SetInputModeUIOnly(APlayerController* Target, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode) {
}

void UGSE_EngineFuncLib::SetInputModeGameOnly(APlayerController* PlayerController) {
}

void UGSE_EngineFuncLib::SetInputDeadZone(APlayerController* PlayerController, const FName& AxisName, float DeadZone) {
}

void UGSE_EngineFuncLib::SetDisplayGamma(const UObject* WorldCtx, float Gamma) {
}

void UGSE_EngineFuncLib::SetDesiredQualityLevel(EGSQualityLevel TargetGSQualityLevel) {
}

bool UGSE_EngineFuncLib::SetCanEverTick(UObject* Obj, bool bEnable) {
    return false;
}

void UGSE_EngineFuncLib::SetAudioBoxFreqNum(UUserWidget* AudioBox, const int32 InFreqNum) {
}

void UGSE_EngineFuncLib::SetActorComponentMobilityMovable(AActor* Actor, bool IsMovable) {
}

void UGSE_EngineFuncLib::ServerSeamlessTravel(UWorld* World, const FString& URL) {
}

void UGSE_EngineFuncLib::SaveStringToFile(const FString& Path, const FString& Data) {
}

void UGSE_EngineFuncLib::SavePSOCacheFile() {
}

void UGSE_EngineFuncLib::RunProcessWithCheck(const FString& InProcessPath) {
}

void UGSE_EngineFuncLib::RunProcess(const FString& InProcessPath) {
}

void UGSE_EngineFuncLib::ResumePsoBatching() {
}

void UGSE_EngineFuncLib::RestartGame(AGameMode* GameMode) {
}

void UGSE_EngineFuncLib::RestartApplication() {
}

void UGSE_EngineFuncLib::ResetAudioVisualizing(UUserWidget* AudioBox) {
}

void UGSE_EngineFuncLib::RequestQuit(const FString& Desc) {
}

void UGSE_EngineFuncLib::RequestExit(bool Force) {
}

void UGSE_EngineFuncLib::ReplaceInputAxisList(APlayerController* PlayerController, const TArray<FGSInputAxisKeyMapping>& AxisMappings) {
}

void UGSE_EngineFuncLib::ReplaceInputActionList(APlayerController* PlayerController, const TArray<FGSInputActionKeyMapping>& ActionMappings) {
}

void UGSE_EngineFuncLib::RegisterComponent(UActorComponent* ActorComponent) {
}

void UGSE_EngineFuncLib::RegisteConsoleKey(TArray<FName> Keys) {
}

void UGSE_EngineFuncLib::QuitGame(UObject* WorldCtx) {
}

void UGSE_EngineFuncLib::QuitEditor() {
}

bool UGSE_EngineFuncLib::QAIsCompiling() {
    return false;
}

bool UGSE_EngineFuncLib::QAHasReached(AActor* AgentActor, AActor* GoalActor) {
    return false;
}

void UGSE_EngineFuncLib::QAGetSimpleCollisionCylinder(AActor* AgentActor, float& CollisionRadius, float& CollisionHalfHeight) {
}

void UGSE_EngineFuncLib::QAGenCrash() {
}

void UGSE_EngineFuncLib::PSOFullCompilation() {
}

void UGSE_EngineFuncLib::PrepareLevelsNeedToBeUnloaded(const UObject* WorldContextObject) {
}

void UGSE_EngineFuncLib::PlayAudio(AActor* AudioUtilActor, bool VisualOnly) {
}

void UGSE_EngineFuncLib::PerfTest(int32 CaseID, int32 Count) {
}

void UGSE_EngineFuncLib::PausePsoBatching() {
}

void UGSE_EngineFuncLib::PauseAudio(AActor* AudioUtilActor) {
}

FLinearColor UGSE_EngineFuncLib::MultipleColorLerp(FLinearColor v1, FLinearColor v2, FLinearColor V3, FLinearColor V4, float LerpAlpha) {
    return FLinearColor{};
}

void UGSE_EngineFuncLib::MediaPlayerTimeSeek(UMediaPlayer* MediaPlayer, double Time) {
}

FVector UGSE_EngineFuncLib::MathEaseV(FVector A, FVector B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps) {
    return FVector{};
}

FRotator UGSE_EngineFuncLib::MathEaseR(FRotator A, FRotator B, float alpha, bool bShortestPath, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps) {
    return FRotator{};
}

FLinearColor UGSE_EngineFuncLib::MathEaseLinearColor(FLinearColor A, FLinearColor B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps) {
    return FLinearColor{};
}

FVector2D UGSE_EngineFuncLib::MathEase2D(FVector2D A, FVector2D B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps) {
    return FVector2D{};
}

float UGSE_EngineFuncLib::MathEase(float A, float B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps) {
    return 0.0f;
}

void UGSE_EngineFuncLib::MarkUnloadPsoState() {
}

void UGSE_EngineFuncLib::LogWLevel(const FString& Str, int32 InLogLevel) {
}

void UGSE_EngineFuncLib::LogWarning(const FString& Str) {
}

void UGSE_EngineFuncLib::LogShippingError(const FString& Str) {
}

void UGSE_EngineFuncLib::LogShipping(const FString& Str) {
}

void UGSE_EngineFuncLib::LogInfo(const FString& Str) {
}

void UGSE_EngineFuncLib::LogError(const FString& Str) {
}

void UGSE_EngineFuncLib::LogDbgWithColor(const FString& Str, bool bPrintScreen, float TimeToDisplay, FColor Color, int32 Key) {
}

void UGSE_EngineFuncLib::LogDbg(const FString& Str, bool bPrintScreen, float TimeToDisplay) {
}

FString UGSE_EngineFuncLib::LoadFileToString(const FString& Path) {
    return TEXT("");
}

bool UGSE_EngineFuncLib::IsUnloadPSOFinished() {
    return false;
}

bool UGSE_EngineFuncLib::IsTestBuild() {
    return false;
}

bool UGSE_EngineFuncLib::IsStandaloneGame() {
    return false;
}

bool UGSE_EngineFuncLib::IsStandAlone(UWorld* World) {
    return false;
}

bool UGSE_EngineFuncLib::IsShippingBuild() {
    return false;
}

bool UGSE_EngineFuncLib::IsSavePSOCacheInErrorState() {
    return false;
}

bool UGSE_EngineFuncLib::IsRegexMatched(const FString& InStr, const FString& RegexExpression) {
    return false;
}

bool UGSE_EngineFuncLib::IsPSOBatchingPaused() {
    return false;
}

bool UGSE_EngineFuncLib::IsListenServer(UWorld* World) {
    return false;
}

bool UGSE_EngineFuncLib::IsEditor() {
    return false;
}

bool UGSE_EngineFuncLib::IsDriverVersionMismatch() {
    return false;
}

bool UGSE_EngineFuncLib::IsDevelopmentBuild() {
    return false;
}

bool UGSE_EngineFuncLib::IsDedicateServer(UWorld* World) {
    return false;
}

bool UGSE_EngineFuncLib::IsControllerInPlayState(AController* Controller) {
    return false;
}

bool UGSE_EngineFuncLib::IsCommandLineHasParam(const FString& QueryParam) {
    return false;
}

bool UGSE_EngineFuncLib::IsClient(UWorld* World) {
    return false;
}

bool UGSE_EngineFuncLib::HasValidCaptureData(UReflectionCaptureComponent* Component) {
    return false;
}

bool UGSE_EngineFuncLib::HasLaunchOption(const FString& Option) {
    return false;
}

void UGSE_EngineFuncLib::GSSaveConfig(UObject* WorldContext) {
}

int32 UGSE_EngineFuncLib::GetWorldMainAudioDeviceID(const UObject* WorldContextObject) {
    return 0;
}

UWorld* UGSE_EngineFuncLib::GetWorldFromObj(UObject* Context) {
    return NULL;
}

FVector2D UGSE_EngineFuncLib::GetWindowScreenResolution() {
    return FVector2D{};
}

TArray<FString> UGSE_EngineFuncLib::GetWarningUITexList(UObject* WorldContext, const FString& TraverseRootPath, const FString& SourceFileCommPath, TArray<FString> ExcludedPathList) {
    return TArray<FString>();
}

TArray<FString> UGSE_EngineFuncLib::GetWarningPhysicsAssetList(UObject* WorldContext, const FString& TraverseRootPath) {
    return TArray<FString>();
}

UPackage* UGSE_EngineFuncLib::GetTransientPackage() {
    return NULL;
}

int32 UGSE_EngineFuncLib::GetTotalPsoPrecompileNum() {
    return 0;
}

FTimespan UGSE_EngineFuncLib::GetTimeSpanFromSeconds(double Seconds) {
    return FTimespan{};
}

int32 UGSE_EngineFuncLib::GetShadowQualityLevel() {
    return 0;
}

int32 UGSE_EngineFuncLib::GetRemainingPsoPrecompileNum() {
    return 0;
}

void UGSE_EngineFuncLib::GetRegexMatchInfo(const FString& InStr, const FString& RegexExpression, TArray<FString>& ExtractedInfo) {
}

EGSQualityLevel UGSE_EngineFuncLib::GetRecommendedQualityLevel(bool bLogInfo) {
    return EGSQualityLevel::INVALID;
}

TSubclassOf<AGameModeBase> UGSE_EngineFuncLib::GetProjectSettingDefaultGameMode() {
    return NULL;
}

FString UGSE_EngineFuncLib::GetProjectDir() {
    return TEXT("");
}

void UGSE_EngineFuncLib::GetPlayerViewRectMatrixInfo(APlayerController* Player, FMatrix& ViewProjectionMatrixInv, FVector2D& OutConstrainedViewRectMin, FVector2D& OutConstrainedViewRectMax, FVector2D& OutViewRectMin, FVector2D& OutViewRectMax) {
}

void UGSE_EngineFuncLib::GetPlayerViewRect(APlayerController* Player, FVector2D& OutConstrainedViewRectMin, FVector2D& OutConstrainedViewRectMax, FVector2D& OutViewRectMin, FVector2D& OutViewRectMax) {
}

FMatrix UGSE_EngineFuncLib::GetPlayerViewProjectionMatrixInv(APlayerController* Player) {
    return FMatrix{};
}

FMatrix UGSE_EngineFuncLib::GetPlayerViewProjectionMatrix(APlayerController* Player) {
    return FMatrix{};
}

double UGSE_EngineFuncLib::GetPlatformTime() {
    return 0.0;
}

int32 UGSE_EngineFuncLib::GetPawnAutoPossessConfig(APawn* PC) {
    return 0;
}

double UGSE_EngineFuncLib::GetMediaPlayerTime(const UMediaPlayer* MediaPlayer) {
    return 0.0;
}

double UGSE_EngineFuncLib::GetMediaPlayerDuartion(const UMediaPlayer* MediaPlayer) {
    return 0.0;
}

TArray<uint8> UGSE_EngineFuncLib::GetMacAddress() {
    return TArray<uint8>();
}

FString UGSE_EngineFuncLib::GetLoginId() {
    return TEXT("");
}

APlayerCameraManager* UGSE_EngineFuncLib::GetLocalPlayerCameraManager(UObject* WorldCtx) {
    return NULL;
}

FString UGSE_EngineFuncLib::GetLaunchValue(const FString& Option) {
    return TEXT("");
}

FKey UGSE_EngineFuncLib::GetInputKey(const FKeyEvent KeyEvent) {
    return FKey{};
}

float UGSE_EngineFuncLib::GetInputDeadZone(APlayerController* PlayerController, const FName& AxisName) {
    return 0.0f;
}

int64 UGSE_EngineFuncLib::GetGFrameCounter() {
    return 0;
}

APlayerController* UGSE_EngineFuncLib::GetFirstLocalPlayerController(UObject* WorldCtx) {
    return NULL;
}

int32 UGSE_EngineFuncLib::GetEngineMinorVersion() {
    return 0;
}

FString UGSE_EngineFuncLib::GetDisplayName(const UObject* Object) {
    return TEXT("");
}

float UGSE_EngineFuncLib::GetDisplayGamma(const UObject* WorldCtx) {
    return 0.0f;
}

void UGSE_EngineFuncLib::GetDeviceInfo(FString& Cpu, FString& Gpu, int32& MemSize) {
}

FString UGSE_EngineFuncLib::GetDeviceId() {
    return TEXT("");
}

FString UGSE_EngineFuncLib::GetDefaultLanguageCS() {
    return TEXT("");
}

FString UGSE_EngineFuncLib::GetCurrentRhiName() {
    return TEXT("");
}

TArray<AActor*> UGSE_EngineFuncLib::GetChildActors(AActor* Actor) {
    return TArray<AActor*>();
}

int32 UGSE_EngineFuncLib::GetBinkMediaPlayerTotalFrames(const UBinkMediaPlayer* MediaPlayer) {
    return 0;
}

double UGSE_EngineFuncLib::GetBinkMediaPlayerTime(const UBinkMediaPlayer* MediaPlayer) {
    return 0.0;
}

float UGSE_EngineFuncLib::GetBinkMediaPlayerFrameRate(const UBinkMediaPlayer* MediaPlayer) {
    return 0.0f;
}

double UGSE_EngineFuncLib::GetBinkMediaPlayerDuartion(const UBinkMediaPlayer* MediaPlayer) {
    return 0.0;
}

int32 UGSE_EngineFuncLib::GetBinkMediaPlayerCurFrame(const UBinkMediaPlayer* MediaPlayer) {
    return 0;
}

TArray<FInputAxisKeyMapping> UGSE_EngineFuncLib::GetAxisMappings(APlayerController* PlayerController) {
    return TArray<FInputAxisKeyMapping>();
}

float UGSE_EngineFuncLib::GetAvailablePhysical() {
    return 0.0f;
}

UAudioComponent* UGSE_EngineFuncLib::GetAudioInfoOfAudioVisualize(AActor* AudioUtilActor, float& AudioDuration) {
    return NULL;
}

float UGSE_EngineFuncLib::GetAsyncLoadPercentage(const FName& PackageName) {
    return 0.0f;
}

float UGSE_EngineFuncLib::GetAnalogValue(const FAnalogInputEvent AnalogInputEvent) {
    return 0.0f;
}

FKey UGSE_EngineFuncLib::GetAnalogInputKey(const FAnalogInputEvent AnalogInputEvent) {
    return FKey{};
}

EGSQualityLevel UGSE_EngineFuncLib::GetActualQualityLevel(bool bLogInfo) {
    return EGSQualityLevel::INVALID;
}

TArray<FInputActionKeyMapping> UGSE_EngineFuncLib::GetActionMappings(APlayerController* PlayerController) {
    return TArray<FInputActionKeyMapping>();
}

bool UGSE_EngineFuncLib::GameInstanceIsDedicatedServer(const UGameInstance* GameInst) {
    return false;
}

void UGSE_EngineFuncLib::FlushMainAudioDevice(const int32 DeviceID) {
}

TArray<FVector> UGSE_EngineFuncLib::FindPathSync(AController* Controller, const FVector& TargetLocation) {
    return TArray<FVector>();
}

UNetDriver* UGSE_EngineFuncLib::FindNamedNetDriver(const UWorld* InWorld, FName NetDriverName) {
    return NULL;
}

FString UGSE_EngineFuncLib::FindAndPrintStaleRefsByObjectPath(const FString& InObjectPath) {
    return TEXT("");
}

FString UGSE_EngineFuncLib::FindAndPrintStaleReferencesToObject(UObject* Obj) {
    return TEXT("");
}

void UGSE_EngineFuncLib::ExecCmdOutGLog(const FString& Cmd, UObject* WorldCtx) {
}

void UGSE_EngineFuncLib::EngineGC(bool bFullPurge) {
}

void UGSE_EngineFuncLib::EnableForceStreamdOutLevelGCCheck(bool Enable, bool IgnoreEditor) {
}

UObject* UGSE_EngineFuncLib::DuplicateAsset(const FString& AssetName, const FString& PackagePath, UObject* OriginalObject) {
    return NULL;
}

void UGSE_EngineFuncLib::DrawDebugCircleArc(const UObject* WorldContextObject, FVector Center, float Radius, const FVector& Direction, float AngleWidth, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness) {
}

void UGSE_EngineFuncLib::DisableDebugExecBindings(UObject* WorldCtx, bool IsDisable) {
}

FEventReply UGSE_EngineFuncLib::DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, const FName& KeyName) {
    return FEventReply{};
}

void UGSE_EngineFuncLib::DestroyActorsWithSpecifiedKeyword(const UObject* InWorldContext, const FString& InKeyword) {
}

void UGSE_EngineFuncLib::DestroyActor(AActor* Actor) {
}

void UGSE_EngineFuncLib::DelayGC() {
}

UReplicationDriver* UGSE_EngineFuncLib::CreateReplicationDriver(UNetDriver* NetDriver, UWorld* World) {
    return NULL;
}

void UGSE_EngineFuncLib::CreateNamedNetDriver(UWorld* InWorld, FName NetDriverName, FName NetDriverDefinition) {
}

UDragDropOperation* UGSE_EngineFuncLib::CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass) {
    return NULL;
}

UObject* UGSE_EngineFuncLib::CreateAsset(const FString& Path, const FString& Name, UClass* CreatedClass) {
    return NULL;
}

void UGSE_EngineFuncLib::CopyToClipBoard(const FString& InStr) {
}

void UGSE_EngineFuncLib::ConsoleVariableSetMouseCursor(bool MouseCursor) {
}

int32 UGSE_EngineFuncLib::ConsoleVarGetInt(const FString& Name) {
    return 0;
}

void UGSE_EngineFuncLib::CloseNetConnection(UObject* WorldContext) {
}

void UGSE_EngineFuncLib::ClientSeamlessTravel(APlayerController* PC, const FString& URL) {
}

void UGSE_EngineFuncLib::CaptureCurrentViewport(bool bCapture) {
}

void UGSE_EngineFuncLib::BlockTillSuspendedLevelsCompleted(const UObject* WorldContextObject) {
}

void UGSE_EngineFuncLib::BlockTillLevelStreamingCompleted(const UObject* WorldContextObject) {
}

void UGSE_EngineFuncLib::BinkMediaPlayerTimeSeek(UBinkMediaPlayer* MediaPlayer, double Time) {
}

bool UGSE_EngineFuncLib::BinkMediaPlayerGoToWithProcMs(UBinkMediaPlayer* MediaPlayer, int32 TargetFrame, int32 ProcMS) {
    return false;
}

bool UGSE_EngineFuncLib::BinkMediaPlayerGoTo(UBinkMediaPlayer* MediaPlayer, int32 TargetFrame) {
    return false;
}

bool UGSE_EngineFuncLib::BindAudioUtilAndBox(AActor* AudioUtilActor, UUserWidget* AudioBox) {
    return false;
}

UAsyncTaskDownloadImage* UGSE_EngineFuncLib::AsyncDownloadImage(const FString& URL) {
    return NULL;
}

void UGSE_EngineFuncLib::AdjustPSOPrecompileBatch(int32 BatchSize, float BatchTime) {
}


