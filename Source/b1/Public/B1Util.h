#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "B1Util.generated.h"

UCLASS(Blueprintable)
class B1_API UB1Util : public UObject {
    GENERATED_BODY()
public:
    UB1Util();

    UFUNCTION(BlueprintCallable)
    static void SetUISettingPbTag(int32 TagId);
    
    UFUNCTION(BlueprintCallable)
    static void SetUISettingData(const TMap<FString, FString>& NewSetUISettingData);
    
    UFUNCTION(BlueprintCallable)
    static void SetUISettingCustomData(const TMap<FString, FString>& DetailSettingData);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartupConfigEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartLevelName(const FString& InStartLevelName);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartCommandList(const TArray<FString>& InStartCommandList);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrivacyAgreement(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetNeverShowStartupUI(bool bInNeverShowStartupUI);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainMonitorID(const FString& MonitorID);
    
    UFUNCTION(BlueprintCallable)
    static void SetGMCommandList(const TMap<uint8, FString>& InGMCommandList);
    
    UFUNCTION(BlueprintCallable)
    static void SetFirstSettingFinish(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetArchiveMarkFinish(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetAgreementReaded(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SaveGameUserSettings();
    
    UFUNCTION(BlueprintCallable)
    static void OpenFileBrowser(const FString& FolderPath);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStartupConfigEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNeverShowStartupUI();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUISettingPbTag();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUISettingData(TMap<FString, FString>& OutUISettingData);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUISettingCustomData(TMap<FString, FString>& OutDetailSettingData);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStartLevelName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStartCommandList(TArray<FString>& OutStartCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomNumberInt(int32 LeftNum, int32 RightNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRandomNumberFloat(float LeftNum, float RightNum);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPrivacyAgreement();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGMCommandList(TMap<uint8, FString>& OutGMCommandList);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFirstSettingFinish();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAvailableMaps(TArray<FString>& OutAvailableMaps);
    
    UFUNCTION(BlueprintCallable)
    static bool GetArchiveMarkFinish();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAgreementReaded();
    
    UFUNCTION(BlueprintCallable)
    static void CopyStringToClipboard(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIsSimulationPlayMode();
    
};

