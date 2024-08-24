#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineInterface.h"
#include "BGWOnlineCloud.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWOnlineCloud : public UBGWOnlineInterface {
    GENERATED_BODY()
public:
    UBGWOnlineCloud();

    UFUNCTION(BlueprintCallable)
    void WriteUserFile(const FString& Filename, const TArray<uint8>& UserData);
    
    UFUNCTION(BlueprintCallable)
    bool ReadUserFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool ReadAllUserFiles();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWriteUserCloudFileCompleteCS(const FString& Filename, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadUserFilesCompleteCS(const FString& Filename, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnumerateUserFilesCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeleteUserFilesCompleteCS(const FString& Filename, bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Init();
    
    UFUNCTION(BlueprintCallable)
    void EnumerateUserFiles();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    void DeleteUserFile(const FString& Filename, bool bCloudDelete, bool bLocalDelete);
    
};

