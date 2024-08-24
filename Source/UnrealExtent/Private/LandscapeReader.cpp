#include "LandscapeReader.h"

ULandscapeReader::ULandscapeReader() {
    this->TargetProxy = NULL;
    this->isCached = false;
}

int32 ULandscapeReader::WeightDataElementSize() {
    return 0;
}

int32 ULandscapeReader::WeightDataElementNum(int32 LayerIndex) {
    return 0;
}

float ULandscapeReader::SampleWeightData(const FVector& WorldPos, int32 LayerIndex, ESampleType SampleType) {
    return 0.0f;
}

float ULandscapeReader::SampleHeightData(const FVector& WorldPos, ESampleType SampleType) {
    return 0.0f;
}

int32 ULandscapeReader::HeightDataElementSize() {
    return 0;
}

int32 ULandscapeReader::HeightDataElementNum() {
    return 0;
}

FIntPtr ULandscapeReader::GetWeightDataInRect(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, int32 LayerIndex) {
    return FIntPtr{};
}

FIntPtr ULandscapeReader::GetWeightData(int32 LayerIndex) {
    return FIntPtr{};
}

FIntPtr ULandscapeReader::GetHeightDataInRect(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY) {
    return FIntPtr{};
}

FIntPtr ULandscapeReader::GetHeightData() {
    return FIntPtr{};
}

void ULandscapeReader::Cache(ALandscapeProxy* NewLandscapeProxy) {
}


