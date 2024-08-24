#include "JavascriptTestLibrary.h"

UJavascriptTestLibrary::UJavascriptTestLibrary() {
}

void UJavascriptTestLibrary::SetContinue(const FJavascriptAutomatedTestInstance& Test, bool bInContinue) {
}

void UJavascriptTestLibrary::PushFrameCounter() {
}

void UJavascriptTestLibrary::PopFrameCounter() {
}

UWorld* UJavascriptTestLibrary::NewWorld() {
    return NULL;
}

void UJavascriptTestLibrary::InitializeActorsForPlay(UWorld* World, const FURL& URL) {
}

void UJavascriptTestLibrary::DestroyWorld(UWorld* World) {
}

void UJavascriptTestLibrary::DestroyUObject(UObject* Object) {
}

void UJavascriptTestLibrary::Destroy(FJavascriptAutomatedTestInstance& Test) {
}

FJavascriptAutomatedTestInstance UJavascriptTestLibrary::Create(const FJavascriptAutomatedTest& Test) {
    return FJavascriptAutomatedTestInstance{};
}

void UJavascriptTestLibrary::ClearExecutionInfo(const FJavascriptAutomatedTestInstance& Test) {
}

void UJavascriptTestLibrary::BeginPlay(UWorld* World) {
}

void UJavascriptTestLibrary::AddWarning(const FJavascriptAutomatedTestInstance& Test, const FString& InWarning) {
}

void UJavascriptTestLibrary::AddLogItem(const FJavascriptAutomatedTestInstance& Test, const FString& InLogItem) {
}

void UJavascriptTestLibrary::AddError(const FJavascriptAutomatedTestInstance& Test, const FString& InError) {
}

void UJavascriptTestLibrary::AddAnalyticsItem(const FJavascriptAutomatedTestInstance& Test, const FString& InAnalyticsItem) {
}


