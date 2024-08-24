#include "JavascriptProfile.h"

UJavascriptProfile::UJavascriptProfile() {
}

UJavascriptProfile* UJavascriptProfile::Stop(const FJavascriptCpuProfiler& Profiler, const FString& Title) {
    return NULL;
}

FJavascriptCpuProfiler UJavascriptProfile::Start(const FString& Title, bool bRecordSamples) {
    return FJavascriptCpuProfiler{};
}

void UJavascriptProfile::SetSamplingInterval(const FJavascriptCpuProfiler& Profiler, int32 us) {
}

void UJavascriptProfile::SetIdle(const FJavascriptCpuProfiler& Profiler, bool is_idle) {
}

FJavascriptProfileNode UJavascriptProfile::GetTopDownRoot() {
    return FJavascriptProfileNode{};
}

float UJavascriptProfile::GetSampleTimestamp(int32 Index) {
    return 0.0f;
}

int32 UJavascriptProfile::GetSamplesCount() {
    return 0;
}

FJavascriptProfileNode UJavascriptProfile::GetSample(int32 Index) {
    return FJavascriptProfileNode{};
}


