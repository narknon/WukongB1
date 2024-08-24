#include "GSFileHelper.h"

UGSFileHelper::UGSFileHelper() {
}

bool UGSFileHelper::WriteFile(const FString& Filename, TArray<uint8> BytesToWrite, bool bAppend, bool IsStandardPath) {
    return false;
}

bool UGSFileHelper::ReadFile(const FString& Filename, TArray<uint8>& BytesToRead, bool IsStandardPath) {
    return false;
}

int64 UGSFileHelper::GetTimeStampTicks(const FString& Filename) {
    return 0;
}

void UGSFileHelper::FindFilesRecursively(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension) {
}

void UGSFileHelper::FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension) {
}

int64 UGSFileHelper::FileSize(const FString& Filename) {
    return 0;
}

bool UGSFileHelper::FileExists(const FString& Filename) {
    return false;
}

bool UGSFileHelper::DirectoryExists(const FString& Directory) {
    return false;
}

bool UGSFileHelper::DeleteFile(const FString& Filename) {
    return false;
}

bool UGSFileHelper::DeleteDirectory(const FString& Directory) {
    return false;
}

bool UGSFileHelper::CreateDirectory(const FString& Directory) {
    return false;
}


