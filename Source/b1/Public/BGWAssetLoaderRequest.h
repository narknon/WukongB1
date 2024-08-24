#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BGWAssetLoaderRequest.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWAssetLoaderRequest : public UObject {
    GENERATED_BODY()
public:
    UBGWAssetLoaderRequest();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasCanceled() const;
    
    UFUNCTION(BlueprintCallable)
    bool WaitUntilComplete(float Timeout, bool bStartStalledHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStalled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombinedHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLoadCompletedOrStalled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLoadCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequestedAssets(TArray<FSoftObjectPath>& AssetList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLoadedCount(int32& LoadedCount, int32& RequestedCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLoadedAssets(TArray<UObject*>& LoadedAssets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteCS() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool Cancel();
    
};

