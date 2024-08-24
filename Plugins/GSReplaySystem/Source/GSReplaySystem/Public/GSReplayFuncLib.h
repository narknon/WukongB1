#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSReplayFuncLib.generated.h"

class UGSReplayCSharpFuncLib;

UCLASS(Blueprintable)
class UGSReplayFuncLib : public UObject {
    GENERATED_BODY()
public:
    UGSReplayFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnRegisterNetworkRemapPath(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnregisterCSharpFuncLibObj(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StopReplay(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SkipTime(const UObject* WorldContext, const float InTimeToSkip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetDemoPlayTimeDilation(const UObject* WorldContext, const float InDemoPlayTimeDilation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetDemoCurrentTime(const UObject* WorldContext, const float CurrentTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetActorPrioritizationEnabled(const UObject* WorldContext, const bool bInPrioritizeActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RequestCheckpoint(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RegisterNetworkRemapPath(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RegisterCSharpFuncLibObj(const UObject* WorldContext, UGSReplayCSharpFuncLib* CSharpFuncLibObj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RecordReplayToLocalFile(const UObject* WorldContext, const FString& Name, const FString& FriendlyName, TArray<FString> InOptions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayReplayFromLocalFile(const UObject* WorldContext, const FString& Name, TArray<FString> InOptions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PauseReplay(const UObject* WorldContext, bool bPause);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsReplayPause(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsRecordingReplay(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsPlayingReplay(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsLoadingCheckpoint(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static double GetLastCheckpointTime(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetDemoTotalTime(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetDemoPlayTimeDilation(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetDemoCurrentTime(const UObject* WorldContext);
    
};

