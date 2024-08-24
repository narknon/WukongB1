#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TamerAsyncLineTraceManager.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UTamerAsyncLineTraceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> VisibleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WaitTraceFrameCount;
    
public:
    UTamerAsyncLineTraceManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterTamerRef(int32 InRefID);
    
    UFUNCTION(BlueprintCallable)
    void StartAsyncLineTrace(const FVector& InPlayerLocation, const TArray<int32>& InTraceTamers);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTamerRef(int32 InRefID, const FVector& InLocation, float InCapsuleHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    bool GetAndCleanAsyncLineTraceResult(TArray<int32>& OutVisibleTamers, TArray<int32>& OutInvisibleTamers);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllData();
    
};

