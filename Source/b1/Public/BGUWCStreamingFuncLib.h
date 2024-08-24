#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGSLevelState.h"
#include "GSSetLevelStateFailedInfo.h"
#include "BGUWCStreamingFuncLib.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGUWCStreamingFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUWCStreamingFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UpdateStreamingState(UObject* WorldContext, bool bBlockTillComplete);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterFromStreamingSource(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SpawnStreamingSource(UObject* WorldContext, FVector SpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    static void SetStreamingManagerViewSource(FVector ViewLocation, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static TArray<FGSSetLevelStateFailedInfo> SetLevelsStateByNames(UObject* InWorldContext, const TArray<FString>& InTargetLevelNames, EGSLevelState InTargetState, int32 InOperationID, bool bBlockOnLoad);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static TArray<FGSSetLevelStateFailedInfo> SetLevelsState(UObject* InWorldContext, const FString& InTargetLevelNameOrKeyword, EGSLevelState InTargetState, int32 InOperationID, bool bKeywordMatch, bool bBlockOnLoad);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterAsStreamingSource(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static TMap<FString, FString> QueryProcessingStreamingLevels(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void PauseDistanceStreaming(UObject* InWorldContext, const TArray<FString>& InExcludedLevelKeywords);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void ModifyStreamingDistanceScaleByStreamingLayer(UObject* InWorldContext, const FString& InTargetLayerName, int32 InTargetLODIndex, float InTargetScaleFactor, bool bBlockTillStreamingCompleted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool IsLevelStreamable(UObject* InWorldContext, const FString& InTargetLevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static int32 GetProcessingStreamingLevelNum(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static TArray<FString> GetLevelNamesByKeyword(UObject* InWorldContext, const FString& InLevelNameKeyword);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static int32 GetLevelNames(UObject* InWorldContext, TArray<FString>& OutLevelNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void GetLevelCurrentStateAndIsConsideredUpdate(UObject* InWorldContext, const TArray<FString>& LevelNames, TMap<FString, uint8>& OutLevelStreamingList, TSet<FString>& OutCosideredUpdateSet);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static int32 GetAllLevelCurrentState(UObject* InWorldContext, TMap<FString, uint8>& OutLevelStreamingList, bool bIgnoreWCTile);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void ForceLoadAllStreamingLevels(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void FlushAllLevelState(UObject* InWorldContext, const TArray<FString>& InExcludedLevelKeywords);
    
    UFUNCTION(BlueprintCallable)
    static void EnableStreamingSource(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void DisableStreamingSource(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DestroyGSWCWorldStreamingSources(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void CheckLevelState(UObject* InWorldContext, const FString& InTargetLevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void CacheWorldCompositionStreamingLayers(UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void CacheWorldCompositionLevelNames(UObject* InWorldContext);
    
};

