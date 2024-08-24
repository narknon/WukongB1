#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GSCapturedStatResult.h"
#include "BGWStatsCapturer.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class B1_API ABGWStatsCapturer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCapturingVRAMInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StatDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StatNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VRAMCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSCapturedStatResult> DesiredStatsValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSCapturedStatResult> DesiredVRAMInfo;
    
    ABGWStatsCapturer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FGSCapturedStatResult> GetTotalCapturedPerfInfo();
    
    UFUNCTION(BlueprintCallable)
    int64 GetStartCycle();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGSCapturedStatResult> GetDesiredVRAMInfo();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGSCapturedStatResult> GetDesiredStatsValue();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteRHIDumpResMemCmds();
    
    UFUNCTION(BlueprintCallable)
    void EnableCapturing_DT(bool bTriggerLogListening, UDataTable* InStatDataTable);
    
    UFUNCTION(BlueprintCallable)
    void EnableCapturing(bool bTriggerLogListening, const FString& MetricsConfigPathUnderProjDir);
    
    UFUNCTION(BlueprintCallable)
    void DisableCapturing(bool bIsStop);
    
};

