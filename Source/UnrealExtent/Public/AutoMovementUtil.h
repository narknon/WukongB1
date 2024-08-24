#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CapturedInfoArrayPerPoint.h"
#include "GSCapturedStatResult.h"
#include "GSPathPointStatInfo.h"
#include "AutoMovementUtil.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UAutoMovementUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAutoMovementUtil();

    UFUNCTION(BlueprintCallable)
    static void SetVfxAutoPlayerRootFolderPath(const FString& InRootFolderPath);
    
    UFUNCTION(BlueprintCallable)
    static void SaveOfflinePathPoints(TArray<FVector> InPoints, const FString& InFilePathUnderProjFolder);
    
    UFUNCTION(BlueprintCallable)
    static bool MergeMultiTextureMipReports(TArray<FString> InReportFilePaths, const FString& OutputMergedFileName);
    
    UFUNCTION(BlueprintCallable)
    static bool MergeMipReportsWithFileNameKeyword(const FString& InDirectoryUnderProjDir, const FString& InFileNameKeyword, const FString& OutputMergedFileName);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadStatsCapturerReport(const FString& InFileNameUnderProjFolder, TArray<FGSPathPointStatInfo>& AllPathPointStatInfo, int32 PointNum);
    
    UFUNCTION(BlueprintCallable)
    static FCapturedInfoArrayPerPoint InsertIntoCapturedInfoArrayPerPoint(TArray<FGSCapturedStatResult> RawCapturedData, FCapturedInfoArrayPerPoint CapturedInfoArrayPerPoint);
    
    UFUNCTION(BlueprintCallable)
    static FString GetVfxAutoPlayerRootFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetOfflinePathPoints(const FString& InFilePathUnderProjDir, bool bUseSparsePoints);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetNowTimestamp();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, float> GetCurPointProcessedMetricsMap(FCapturedInfoArrayPerPoint InCapturedInfoPerPoint);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime FromTimestamp(int64 Time);
    
    UFUNCTION(BlueprintCallable)
    static FString FormatTimeSeconds(const float InDuration);
    
    UFUNCTION(BlueprintCallable)
    static FString FormatTimeAuto(const double InDuration, const int32 NumDigits);
    
    UFUNCTION(BlueprintCallable)
    static FString ExtractDateTimeInfo(const FString& InString);
    
    UFUNCTION(BlueprintCallable)
    static void ExportStatsCapturedReport(TArray<FGSPathPointStatInfo> InPathPointStatsInfo, const FString& InFilename, bool bAppend, bool bOutputHeader);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportCapturedInfoBatch(const int32 BatchSize, const int32 TotalPointNum, TArray<FGSPathPointStatInfo> InPathPointStatsInfo, const FString& InFilename, bool bLastBatch, bool bOutputHeader);
    
    UFUNCTION(BlueprintCallable)
    static void AppendOfflinePathPoints(TArray<FVector> InPoints, const FString& InFilePathUnderProjFolder);
    
    UFUNCTION(BlueprintCallable)
    static void AppendHeaderToCapturedReport(TArray<FString> CapturedInfoNameList, const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    static void AppendGeneralStatisticsToCapturedReport(const FString& InFilename, int32 MetricsNum, int32 PointNum);
    
};

