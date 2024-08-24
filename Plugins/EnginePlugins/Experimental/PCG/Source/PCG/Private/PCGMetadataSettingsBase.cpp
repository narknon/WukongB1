#include "PCGMetadataSettingsBase.h"

UPCGMetadataSettingsBase::UPCGMetadataSettingsBase() {
    this->OutputDataFromPin = TEXT("Default");
}

TArray<FName> UPCGMetadataSettingsBase::GetOutputDataFromPinOptions() const {
    return TArray<FName>();
}


