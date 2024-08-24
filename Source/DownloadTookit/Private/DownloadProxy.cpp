#include "DownloadProxy.h"

UDownloadProxy::UDownloadProxy() {
}

bool UDownloadProxy::Tick(float Delta) {
    return false;
}

bool UDownloadProxy::Resume() {
    return false;
}

void UDownloadProxy::Reset() {
}

void UDownloadProxy::RequestDownload(const FString& InURL, const FString& InSavePathOpt, bool bInSliceOpt, int32 InSliceByteSizeOpt, bool bInForceOpt) {
}

bool UDownloadProxy::ReDownload() {
    return false;
}

void UDownloadProxy::Pause() {
}

bool UDownloadProxy::HashCheck(const FString& InMD5Hash) const {
    return false;
}

int32 UDownloadProxy::GetTotalSize() const {
    return 0;
}

EDownloadStatus UDownloadProxy::GetDownloadStatus() const {
    return EDownloadStatus::NotStarted;
}

float UDownloadProxy::GetDownloadSpeedKbs() const {
    return 0.0f;
}

int32 UDownloadProxy::GetDownloadSpeed() const {
    return 0;
}

float UDownloadProxy::GetDownloadProgress() const {
    return 0.0f;
}

int32 UDownloadProxy::GetDownloadedSize() const {
    return 0;
}

FDownloadFile UDownloadProxy::GetDownloadedFileInfo() const {
    return FDownloadFile{};
}

void UDownloadProxy::Cancel() {
}


