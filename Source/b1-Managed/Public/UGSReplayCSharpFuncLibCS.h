#pragma once
#include "CoreMinimal.h"
#include "GSReplayCSharpFuncLib.h"
#include "UGSReplayCSharpFuncLibCS.generated.h"

class UNetConnection;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class UUGSReplayCSharpFuncLibCS : public UGSReplayCSharpFuncLib {
    GENERATED_BODY()
public:
    UUGSReplayCSharpFuncLibCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostDemoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReplayStarted(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNetworkRemapPathCS(UObject* Outer, const FString& OriginName, FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReplayScrubComplete(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReplaySeverConnectionInit(UWorld* World, UNetConnection* SeverConnection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WriteGameSpecificDemoHeaderCS(TArray<FString>& GameSpecificData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessGameSpecificDemoHeaderCS(const FString& GameSpecificData, FString& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreProcessGameSpecificDemoHeaderCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostProcessGameSpecificDemoHeaderCS();
    
};

