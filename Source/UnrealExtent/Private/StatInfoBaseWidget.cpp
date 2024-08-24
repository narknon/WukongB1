#include "StatInfoBaseWidget.h"

UStatInfoBaseWidget::UStatInfoBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->StatGroupThresholdConfig = NULL;
    this->FetchStatInfoInterval = 1.00f;
    this->SimulatedGraphicsCard = GTX_1050Ti;
    this->SelfGraphicsCard = GTX_1050Ti;
    this->bEnableRecordPerformanceData = false;
}

void UStatInfoBaseWidget::StartRecord(const FString& FXConfig, const FString& UnitName, const FString& SkillName, const FString& AssetPath, const float MontageLength) {
}

void UStatInfoBaseWidget::SaveRecordsToFiles(int32 NeedCleanup) {
}

float UStatInfoBaseWidget::GetSimulatedGraphicsCardScaleFactor(const FString& InStatName) {
    return 0.0f;
}

FString UStatInfoBaseWidget::GetGPUBrand() {
    return TEXT("");
}

void UStatInfoBaseWidget::EndRecord() {
}


