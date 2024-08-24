#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWGamePlayTraceObject.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWGamePlayTraceObject : public UObject {
    GENERATED_BODY()
public:
    UBGWGamePlayTraceObject();

    UFUNCTION(BlueprintCallable)
    void TraceStart(const FString& TraceTaskName);
    
    UFUNCTION(BlueprintCallable)
    void TraceEnd();
    
    UFUNCTION(BlueprintCallable)
    void StopFetchTick();
    
    UFUNCTION(BlueprintCallable)
    void StartFetchTick();
    
    UFUNCTION(BlueprintCallable)
    FString RecordFrameRate_Stop();
    
    UFUNCTION(BlueprintCallable)
    void RecordFrameRate_Start();
    
    UFUNCTION(BlueprintCallable)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnShutdown();
    
    UFUNCTION(BlueprintCallable)
    void OnInit();
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableTraceing();
    
    UFUNCTION(BlueprintCallable)
    bool CanShutdown();
    
};

