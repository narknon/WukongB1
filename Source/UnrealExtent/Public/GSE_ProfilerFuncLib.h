#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSCapturedStatResult.h"
#include "GSE_ProfilerFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_ProfilerFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_ProfilerFuncLib();

    UFUNCTION(BlueprintCallable)
    static void StopRecordingPerfChart();
    
    UFUNCTION(BlueprintCallable)
    static void StartRecordingPerfChart(const FString& TargetFileName, int32 InTotalFrames, bool bCollectInsightData);
    
    UFUNCTION(BlueprintCallable)
    static void GSStatsMasterEnableAdd();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGSCapturedStatResult> CaptureSpecificStatsInfo(const TArray<FString>& StatNames);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGSCapturedStatResult> CaptureAllStatsInfo();
    
};

