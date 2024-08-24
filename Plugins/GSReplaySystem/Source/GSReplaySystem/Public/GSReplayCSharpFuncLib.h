#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSReplayCSharpFuncLib.generated.h"

class UNetConnection;
class UWorld;

UCLASS(Blueprintable)
class UGSReplayCSharpFuncLib : public UObject {
    GENERATED_BODY()
public:
    UGSReplayCSharpFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WriteGameSpecificDemoHeaderCS(TArray<FString>& GameSpecificData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetViewTargetPlayer(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDemoCurrentTime(float InTimeToSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessGameSpecificDemoHeaderCS(const FString& GameSpecificData, FString& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreProcessGameSpecificDemoHeaderCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostProcessGameSpecificDemoHeaderCS();
    
    UFUNCTION(BlueprintCallable)
    void OnWriteGameSpecificDemoHeader(TArray<FString>& GameSpecificData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayStarted(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplaySeverConnectionInit(UWorld* World, UNetConnection* SeverConnection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayScrubComplete(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnProcessGameSpecificDemoHeader(const TArray<FString>& GameSpecificData, FString& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreScrub(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostDemoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSNetworkRemapPathCS(const UObject* Outer, const FString& OriginName, FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void GSNetworkRemapPath(const UObject* Outer, FString& Name);
    
};

