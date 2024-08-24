#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptCpuProfiler.h"
#include "JavascriptProfileNode.h"
#include "JavascriptProfile.generated.h"

class UJavascriptProfile;

UCLASS(Blueprintable)
class V8_API UJavascriptProfile : public UObject {
    GENERATED_BODY()
public:
    UJavascriptProfile();

    UFUNCTION(BlueprintCallable)
    static UJavascriptProfile* Stop(const FJavascriptCpuProfiler& Profiler, const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptCpuProfiler Start(const FString& Title, bool bRecordSamples);
    
    UFUNCTION(BlueprintCallable)
    static void SetSamplingInterval(const FJavascriptCpuProfiler& Profiler, int32 us);
    
    UFUNCTION(BlueprintCallable)
    static void SetIdle(const FJavascriptCpuProfiler& Profiler, bool is_idle);
    
    UFUNCTION(BlueprintCallable)
    FJavascriptProfileNode GetTopDownRoot();
    
    UFUNCTION(BlueprintCallable)
    float GetSampleTimestamp(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSamplesCount();
    
    UFUNCTION(BlueprintCallable)
    FJavascriptProfileNode GetSample(int32 Index);
    
};

