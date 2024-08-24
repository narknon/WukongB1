#include "JavascriptSemaphore.h"

UJavascriptSemaphore::UJavascriptSemaphore() {
}

void UJavascriptSemaphore::Unlock() {
}

bool UJavascriptSemaphore::TryLock(int32 NanosecondsToWait) {
    return false;
}

void UJavascriptSemaphore::Lock() {
}

void UJavascriptSemaphore::Dispose() {
}

UJavascriptSemaphore* UJavascriptSemaphore::Create(const FName& Name, bool bCreate, int32 MaxLocks) {
    return NULL;
}


