#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EStatUISimulatedGraphicsCard.h"
#include "StatInfoBaseWidget.generated.h"

class UStatGroupInfoThresholdConfig;

UCLASS(Blueprintable, EditInlineNew)
class UNREALEXTENT_API UStatInfoBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatGroupInfoThresholdConfig* StatGroupThresholdConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FetchStatInfoInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStatUISimulatedGraphicsCard> SimulatedGraphicsCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStatUISimulatedGraphicsCard> SelfGraphicsCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRecordPerformanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RecordFileName;
    
    UStatInfoBaseWidget();

    UFUNCTION(BlueprintCallable)
    void StartRecord(const FString& FXConfig, const FString& UnitName, const FString& SkillName, const FString& AssetPath, const float MontageLength);
    
    UFUNCTION(BlueprintCallable)
    void SaveRecordsToFiles(int32 NeedCleanup);
    
    UFUNCTION(BlueprintCallable)
    float GetSimulatedGraphicsCardScaleFactor(const FString& InStatName);
    
    UFUNCTION(BlueprintCallable)
    FString GetGPUBrand();
    
    UFUNCTION(BlueprintCallable)
    void EndRecord();
    
};

