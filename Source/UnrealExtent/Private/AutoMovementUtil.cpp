#include "AutoMovementUtil.h"

UAutoMovementUtil::UAutoMovementUtil() {
}

void UAutoMovementUtil::SetVfxAutoPlayerRootFolderPath(const FString& InRootFolderPath) {
}

void UAutoMovementUtil::SaveOfflinePathPoints(TArray<FVector> InPoints, const FString& InFilePathUnderProjFolder) {
}

bool UAutoMovementUtil::MergeMultiTextureMipReports(TArray<FString> InReportFilePaths, const FString& OutputMergedFileName) {
    return false;
}

bool UAutoMovementUtil::MergeMipReportsWithFileNameKeyword(const FString& InDirectoryUnderProjDir, const FString& InFileNameKeyword, const FString& OutputMergedFileName) {
    return false;
}

bool UAutoMovementUtil::LoadStatsCapturerReport(const FString& InFileNameUnderProjFolder, TArray<FGSPathPointStatInfo>& AllPathPointStatInfo, int32 PointNum) {
    return false;
}

FCapturedInfoArrayPerPoint UAutoMovementUtil::InsertIntoCapturedInfoArrayPerPoint(TArray<FGSCapturedStatResult> RawCapturedData, FCapturedInfoArrayPerPoint CapturedInfoArrayPerPoint) {
    return FCapturedInfoArrayPerPoint{};
}

FString UAutoMovementUtil::GetVfxAutoPlayerRootFolderPath() {
    return TEXT("");
}

TArray<FVector> UAutoMovementUtil::GetOfflinePathPoints(const FString& InFilePathUnderProjDir, bool bUseSparsePoints) {
    return TArray<FVector>();
}

int64 UAutoMovementUtil::GetNowTimestamp() {
    return 0;
}

TMap<FString, float> UAutoMovementUtil::GetCurPointProcessedMetricsMap(FCapturedInfoArrayPerPoint InCapturedInfoPerPoint) {
    return TMap<FString, float>();
}

FDateTime UAutoMovementUtil::FromTimestamp(int64 Time) {
    return FDateTime{};
}

FString UAutoMovementUtil::FormatTimeSeconds(const float InDuration) {
    return TEXT("");
}

FString UAutoMovementUtil::FormatTimeAuto(const double InDuration, const int32 NumDigits) {
    return TEXT("");
}

FString UAutoMovementUtil::ExtractDateTimeInfo(const FString& InString) {
    return TEXT("");
}

void UAutoMovementUtil::ExportStatsCapturedReport(TArray<FGSPathPointStatInfo> InPathPointStatsInfo, const FString& InFilename, bool bAppend, bool bOutputHeader) {
}

bool UAutoMovementUtil::ExportCapturedInfoBatch(const int32 BatchSize, const int32 TotalPointNum, TArray<FGSPathPointStatInfo> InPathPointStatsInfo, const FString& InFilename, bool bLastBatch, bool bOutputHeader) {
    return false;
}

void UAutoMovementUtil::AppendOfflinePathPoints(TArray<FVector> InPoints, const FString& InFilePathUnderProjFolder) {
}

void UAutoMovementUtil::AppendHeaderToCapturedReport(TArray<FString> CapturedInfoNameList, const FString& InFilename) {
}

void UAutoMovementUtil::AppendGeneralStatisticsToCapturedReport(const FString& InFilename, int32 MetricsNum, int32 PointNum) {
}


