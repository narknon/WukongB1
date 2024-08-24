#include "GSE_FileFuncLib.h"

UGSE_FileFuncLib::UGSE_FileFuncLib() {
}

bool UGSE_FileFuncLib::ReadFile(const FString& Path, TArray<uint8>& BytesToRead) {
    return false;
}

bool UGSE_FileFuncLib::MountPakWithInPath(const FString& InPakFilename, int32 PakOrder, const FString& InPath) {
    return false;
}

bool UGSE_FileFuncLib::MountPak(const FString& InPakFilename, int32 PakOrder) {
    return false;
}

bool UGSE_FileFuncLib::MountAllPakFiles(const TArray<FString>& PakFolders) {
    return false;
}

bool UGSE_FileFuncLib::LoadFileToArray(const FString& Path, TArray<uint8>& FileData) {
    return false;
}

bool UGSE_FileFuncLib::FindFilesRecursively(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension) {
    return false;
}

bool UGSE_FileFuncLib::FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension) {
    return false;
}

bool UGSE_FileFuncLib::ExtractFileToPath(const FString& Src, const FString& Dest) {
    return false;
}

bool UGSE_FileFuncLib::ExtractDirToPath(const FString& Src, const FString& Dest) {
    return false;
}

bool UGSE_FileFuncLib::AndroidHasFileInApk(const FString& SrcPath) {
    return false;
}

bool UGSE_FileFuncLib::AndroidExtractFolderFromApk(const FString& SrcPath, const FString& DestPath) {
    return false;
}


