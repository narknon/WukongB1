#include "BGWAssetLoaderRequest.h"

UBGWAssetLoaderRequest::UBGWAssetLoaderRequest() {
}

bool UBGWAssetLoaderRequest::WasCanceled() const {
    return false;
}

bool UBGWAssetLoaderRequest::WaitUntilComplete(float Timeout, bool bStartStalledHandles) {
    return false;
}

bool UBGWAssetLoaderRequest::IsStalled() const {
    return false;
}

bool UBGWAssetLoaderRequest::IsLoadingInProgress() const {
    return false;
}

bool UBGWAssetLoaderRequest::IsCombinedHandle() const {
    return false;
}

bool UBGWAssetLoaderRequest::IsActive() const {
    return false;
}

bool UBGWAssetLoaderRequest::HasLoadCompletedOrStalled() const {
    return false;
}

bool UBGWAssetLoaderRequest::HasLoadCompleted() const {
    return false;
}

void UBGWAssetLoaderRequest::GetRequestedAssets(TArray<FSoftObjectPath>& AssetList) const {
}

float UBGWAssetLoaderRequest::GetProgress() const {
    return 0.0f;
}

int32 UBGWAssetLoaderRequest::GetPriority() const {
    return 0;
}

void UBGWAssetLoaderRequest::GetLoadedCount(int32& LoadedCount, int32& RequestedCount) const {
}

void UBGWAssetLoaderRequest::GetLoadedAssets(TArray<UObject*>& LoadedAssets) const {
}

FString UBGWAssetLoaderRequest::GetDebugName() const {
    return TEXT("");
}


bool UBGWAssetLoaderRequest::Cancel() {
    return false;
}


