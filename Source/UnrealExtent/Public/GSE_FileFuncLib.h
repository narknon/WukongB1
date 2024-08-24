#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_FileFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_FileFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_FileFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool ReadFile(const FString& Path, TArray<uint8>& BytesToRead);
    
    UFUNCTION(BlueprintCallable)
    static bool MountPakWithInPath(const FString& InPakFilename, int32 PakOrder, const FString& InPath);
    
    UFUNCTION(BlueprintCallable)
    static bool MountPak(const FString& InPakFilename, int32 PakOrder);
    
    UFUNCTION(BlueprintCallable)
    static bool MountAllPakFiles(const TArray<FString>& PakFolders);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFileToArray(const FString& Path, TArray<uint8>& FileData);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFilesRecursively(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension);
    
    UFUNCTION(BlueprintCallable)
    static bool ExtractFileToPath(const FString& Src, const FString& Dest);
    
    UFUNCTION(BlueprintCallable)
    static bool ExtractDirToPath(const FString& Src, const FString& Dest);
    
    UFUNCTION(BlueprintCallable)
    static bool AndroidHasFileInApk(const FString& SrcPath);
    
    UFUNCTION(BlueprintCallable)
    static bool AndroidExtractFolderFromApk(const FString& SrcPath, const FString& DestPath);
    
};

