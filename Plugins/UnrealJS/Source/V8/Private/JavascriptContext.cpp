#include "JavascriptContext.h"

UJavascriptContext::UJavascriptContext() {
}

bool UJavascriptContext::WriteDTS(const FString& Target, bool bIncludingTooltip) {
    return false;
}

bool UJavascriptContext::WriteAliases(const FString& Target) {
    return false;
}

void UJavascriptContext::UnregisterConsoleCommand(const FString& Command) {
}

void UJavascriptContext::SetContextId(const FString& Name) {
}

FString UJavascriptContext::RunScript(const FString& Script, bool bOutput) {
    return TEXT("");
}

void UJavascriptContext::RunFile(const FString& Filename) {
}

void UJavascriptContext::RequestV8GarbageCollection() {
}

void UJavascriptContext::RegisterConsoleCommand(const FString& Command, const FString& Help, FJavascriptFunction Function) {
}

FString UJavascriptContext::ReadScriptFile(const FString& Filename) {
    return TEXT("");
}

bool UJavascriptContext::IsDebugContext() const {
    return false;
}

FString UJavascriptContext::GetScriptFileFullPath(const FString& Filename) {
    return TEXT("");
}

void UJavascriptContext::FindPathFile(const FString& TargetRootPath, const FString& TargetFileName, TArray<FString>& OutFiles) {
}

void UJavascriptContext::Expose(const FString& Name, UObject* Object) {
}

void UJavascriptContext::DestroyInspector() {
}

void UJavascriptContext::CreateInspector(int32 Port) {
}


