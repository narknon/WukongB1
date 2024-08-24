#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DirectoryWatcherCallbackDelegate.h"
#include "DirectoryWatcher.generated.h"

UCLASS(Blueprintable)
class V8_API UDirectoryWatcher : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Added;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Modified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Removed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryWatcherCallback OnChanged;
    
    UDirectoryWatcher();

    UFUNCTION(BlueprintCallable)
    void Watch(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    void Unwatch();
    
    UFUNCTION(BlueprintCallable)
    bool Contains(const FString& file);
    
};

