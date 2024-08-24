#include "TamerAsyncLineTraceManager.h"

UTamerAsyncLineTraceManager::UTamerAsyncLineTraceManager() {
    this->WaitTraceFrameCount = 0;
}

void UTamerAsyncLineTraceManager::UnregisterTamerRef(int32 InRefID) {
}

void UTamerAsyncLineTraceManager::StartAsyncLineTrace(const FVector& InPlayerLocation, const TArray<int32>& InTraceTamers) {
}

void UTamerAsyncLineTraceManager::RegisterTamerRef(int32 InRefID, const FVector& InLocation, float InCapsuleHalfHeight) {
}

bool UTamerAsyncLineTraceManager::GetAndCleanAsyncLineTraceResult(TArray<int32>& OutVisibleTamers, TArray<int32>& OutInvisibleTamers) {
    return false;
}

void UTamerAsyncLineTraceManager::ClearAllData() {
}


