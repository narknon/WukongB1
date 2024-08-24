#include "JavascriptProcess.h"

UJavascriptProcess::UJavascriptProcess() {
}

bool UJavascriptProcess::WriteToPipe(const FString& Message, FString& OutWritten) {
    return false;
}

void UJavascriptProcess::Wait() {
}

void UJavascriptProcess::Terminate(bool KillTree) {
}

void UJavascriptProcess::Sleep(float Seconds) {
}

void UJavascriptProcess::SimulateKeypress(int32 KeyEvent) {
}

void UJavascriptProcess::SetEnvironmentVar(const FString& VarName, const FString& VarValue) {
}

FString UJavascriptProcess::ReadFromPipe() {
    return TEXT("");
}

bool UJavascriptProcess::ReadArrayFromPipe(TArray<uint8>& Array) {
    return false;
}

UJavascriptProcess* UJavascriptProcess::Open_PID(int32 ProcessId) {
    return NULL;
}

UJavascriptProcess* UJavascriptProcess::Open(const FString& ProcName) {
    return NULL;
}

void UJavascriptProcess::LaunchURL(const FString& URL, const FString& Parms, FString& Error) {
}

bool UJavascriptProcess::IsRunning() {
    return false;
}

bool UJavascriptProcess::IsApplicationRunning_PID(int32 ProcessId) {
    return false;
}

bool UJavascriptProcess::IsApplicationRunning(const FString& ProcName) {
    return false;
}

FString UJavascriptProcess::GetString(const FString& Key, bool bFlag) {
    return TEXT("");
}

bool UJavascriptProcess::GetReturnCode(int32& ReturnCode) {
    return false;
}

FString UJavascriptProcess::GetEnvironmentVar(const FString& VarName) {
    return TEXT("");
}

int32 UJavascriptProcess::GetCurrentProcessId() {
    return 0;
}

FString UJavascriptProcess::GetApplicationName(int32 ProcessId) {
    return TEXT("");
}

UJavascriptProcess* UJavascriptProcess::Create(const FString& URL, const FString& Parms, bool bLaunchDetached, bool bLaunchHidden, bool bLaunchReallyHidden, int32 PriorityModifier, const FString& OptionalWorkingDirectory, bool bUsePipe) {
    return NULL;
}

void UJavascriptProcess::Close() {
}

bool UJavascriptProcess::CanLaunchURL(const FString& URL) {
    return false;
}


