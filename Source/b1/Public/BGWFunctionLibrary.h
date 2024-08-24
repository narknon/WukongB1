#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BUE_GrantItemsDeferred_CSDelegate.h"
#include "EBGWStreamingVolumeUsage.h"
#include "GSStreamingLevelLoadSetting.h"
#include "BGWFunctionLibrary.generated.h"

class ABGWLevelStreamingVolume;
class UBGW_EventCollection;
class ULevelStreaming;
class UObject;
class UPackage;
class UWorld;

UCLASS(Blueprintable)
class B1_API UBGWFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGWFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RetargetLevelStreamingLevelNames(UObject* WorldContext, const FString& sourceNames, const FString& destNames, const FString& levelPrefix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResumeBGWVolumeLevelStreaming(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PauseBGWVolumeLevelStreaming(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MaintainVolumesContainYuanjing(TArray<ABGWLevelStreamingVolume*> InStreamingVolumes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDistanceStreamingValid(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLevelStreamingAssetName(ULevelStreaming* LevelStreaming);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBGW_EventCollection* GetBGWEvents(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWSetIsCameraMoveableWhenPaused(const UObject* WorldContextObject, bool IsCameraMoveable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWSetGamePaused(const UObject* WorldContextObject, bool bPaused);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWSetAllLevelStreamingVolumeEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWRequestAsyncLoad(UObject* WorldContextObject, TArray<FSoftObjectPath> LoadList, FBUE_GrantItemsDeferred_CS CallBackDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWRemoveLevelFromWhiteList(UObject* WorldContextObject, const FName& InLevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWRemoveLevelFromBlackList(UObject* WorldContextObject, const FName& InLevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWProcessLevelStreamingVolumes(UObject* WorldContextObject, FVector OverrideViewLocation, bool bUseOverrideViewLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWGetStatusChangedStreamingLevels(UObject* WorldContextObject, TMap<ULevelStreaming*, FGSStreamingLevelLoadSetting>& OutStreamingLevels);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGWGetIsCameraMoveableWhenPaused(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> BGWGetAlwaysCookPathList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevelStreaming*> BGWGetAllStreamingLevels(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* BGWFindWorldInPackage(UPackage* Package);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWAddLevelToWhiteList(UObject* WorldContextObject, const FName& InLevelName, const EBGWStreamingVolumeUsage& InUsage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGWAddLevelToBlackList(UObject* WorldContextObject, const FName& InLevelName);
    
};

