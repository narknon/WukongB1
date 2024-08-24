#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSFileHelper.generated.h"

UCLASS(Blueprintable)
class UGSFileHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSFileHelper();

    UFUNCTION(BlueprintCallable)
    static bool WriteFile(const FString& Filename, TArray<uint8> BytesToWrite, bool bAppend, bool IsStandardPath);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadFile(const FString& Filename, TArray<uint8>& BytesToRead, bool IsStandardPath);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetTimeStampTicks(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void FindFilesRecursively(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension);
    
    UFUNCTION(BlueprintCallable)
    static void FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension);
    
    UFUNCTION(BlueprintCallable)
    static int64 FileSize(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool FileExists(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool DirectoryExists(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteDirectory(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateDirectory(const FString& Directory);
    
};

